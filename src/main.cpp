#include <Arduino.h>
#include "font8x8.h"
#include <ESP32Encoder.h>
#include <CheapStepper.h>

ESP32Encoder encoder;
CheapStepper stepper(16, 17, 21, 22); 

// Font was generated here: https://rop.nl/truetype2gfx/

#define STEPS_PER_CM 8 // 40 // 1 full cycle is 1cm
#define PIXEL_CM 1       // Every pixel is 1cm len
#define LETTER_PIXELS 8
#define PIXEL_PAINT_MS 1000

static String text = "Hello World";
static int total_text_steps;

struct fconv {
  int start_idx;
  int start;
  int end;
};

static struct fconv fconv[] = {
  { 2 + 0, ' ', 'z' },
  { 0 },
};

static const uint8_t *get_glyph(const char c)
{
  struct fconv *f = fconv;

  while (f->start_idx) {
    if (c >= f->start && c < f->end)
      return &font[f->start_idx + 8 * (c - f->start)];
    
    f++;
  }

  return NULL;
}

static void setup_text()
{
  total_text_steps = text.length() * PIXEL_CM * STEPS_PER_CM * LETTER_PIXELS;
  return;


  byte tempChrByte   = 0;
  char tempChr       = ' ';

  for (int i = 0; i < text.length(); i++) {
    byte charNum = text.c_str()[i];
    const uint8_t *glyph = get_glyph(text.c_str()[i]);

    Serial.println("Character: " + String(text[i]));
    Serial.println("font offset: " + String(glyph - font));

    for (int j = 0; j < 8; j++) {
      tempChrByte = pgm_read_byte_near(glyph);

      for(int k = 7; k >= 0; k--) {
          tempChr = (tempChrByte & 1<<k) ? '*' : ' ';

          Serial.print(tempChr);
      }
      Serial.println("");
      glyph++;
    }

    Serial.println("-----");
  }

  Serial.println("\n");
}

static void setup_encoder()
{
	// Enable the weak pull down resistors

	//ESP32Encoder::useInternalWeakPullResistors=DOWN;
	// Enable the weak pull up resistors
	ESP32Encoder::useInternalWeakPullResistors=UP;

	// use pin 19 and 18 for the first encoder
	encoder.attachHalfQuad(19, 18);
		
	// set starting count value after attaching
	// encoder.setCount(37);

	// clear the encoder's raw count and set the tracked count to zero
	encoder.clearCount();
	Serial.println("Encoder Start = " + String((int32_t)encoder.getCount()));
}

static void loop_encoder()
{
	// Loop and read the count
	Serial.println("Encoder count = " + String((int32_t)encoder.getCount()));
}

static void setup_stepper()
{
  // let's set a custom speed of 20rpm (the default is ~16.25rpm)
  
  stepper.setRpm(20); 
  /* Note: CheapStepper library assumes you are powering your 28BYJ-48 stepper
   * using an external 5V power supply (>100mA) for RPM calculations
   * -- don't try to power the stepper directly from the Arduino
   * 
   * accepted RPM range: 6RPM (may overheat) - 24RPM (may skip)
   * ideal range: 10RPM (safe, high torque) - 22RPM (fast, low torque)
   */

}

void setup()
{
  Serial.begin(9600);
  while (!Serial);  // wait for serial port to connect. Needed for native USB

  setup_text();
  setup_encoder();
  setup_stepper();
}

void spray(uint8_t pixel, bool on)
{
  Serial.print(on ? '*' : ' ');

  if (pixel != 1)
    return;
  
  if (on)
    stepper.moveToDegree(true, 180);
  else
    stepper.moveToDegree(false, 0);
}

void loop()
{
  static unsigned long stop_painting_ts;
  static unsigned long next;
  static int prev_text_letter = -1;
  static int prev_letter_pixel = -1;
  
  int steps = encoder.getCount();
  int text_step = steps % total_text_steps;
  int text_letter = (text_step / (PIXEL_CM * STEPS_PER_CM)) / LETTER_PIXELS;
  int letter_pixel = (text_step / (PIXEL_CM * STEPS_PER_CM)) % LETTER_PIXELS;

  if (prev_text_letter == text_letter && prev_letter_pixel == letter_pixel) {
    if (stop_painting_ts && millis() > stop_painting_ts) {
      Serial.println("Stop painting");
      stop_painting_ts = 0;
    }

    return;
  }

  //if (next && millis() < next)
  //  return;

  //next = millis() + 1000;

  char letter = text.charAt(text_letter);

  const uint8_t *glyph = get_glyph(letter);
  if (!glyph)
    glyph = get_glyph('X');

  uint8_t pixels = pgm_read_byte_near(glyph + letter_pixel);

  for (int i = 7; i >= 0; i--) {
    spray(i, pixels & 1<<i);
  }

  Serial.printf("  steps: %d | text_step: %d letter: %c pixel: %d.%d - pixels: %#x\n", steps, text_step, letter, text_letter, letter_pixel, pixels);

  prev_text_letter = text_letter;
  prev_letter_pixel = letter_pixel;
  stop_painting_ts = millis() + PIXEL_PAINT_MS;
}