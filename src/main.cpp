#include <Arduino.h>
#include "font8x8.h"

// Font was generated here: https://rop.nl/truetype2gfx/

String text = "Hello World";

void setup() {
  Serial.begin(9600);
  while (!Serial);  // wait for serial port to connect. Needed for native USB
  
  byte tempChrByte   = 0;
  char tempChr       = ' ';

  for (int i = 0; i < text.length(); i++) {
    byte charNum = text.c_str()[i];

    Serial.println("Character: " + String(text[i]));
    Serial.println("Ascii: " + String(charNum));

    for (int j = 0; j < 8; j++) {
      tempChrByte = pgm_read_byte_near(c64_font + (charNum * 8) + j);

      for(int k = 7; k >= 0; k--) {
          tempChr = (tempChrByte & 1<<k) ? '*' : ' ';

          Serial.print(tempChr);
      }
      Serial.println("");
    }

    Serial.println("-----");
  }

  Serial.println("\n");
}

void loop() {
}
