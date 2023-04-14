#include <Arduino.h>
#include "font8x8.h"

// Font was generated here: https://rop.nl/truetype2gfx/

String text = "Hello World";

struct fconv {
  int start_idx;
  int start;
  int end;
};

static struct fconv fconv[] = {
  { 2 + 0, ' ', 'z' },
  { 0 },
};

static const uint8_t *get_glyph(char c)
{
  struct fconv *f = fconv;

  while (f->start_idx) {
    if (c >= f->start && c < f->end)
      return &font[f->start_idx + 8 * (c - f->start)];
    
    f++;
  }

  return NULL;
}

void setup() {
  Serial.begin(9600);
  while (!Serial);  // wait for serial port to connect. Needed for native USB
  
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

void loop() {
}
