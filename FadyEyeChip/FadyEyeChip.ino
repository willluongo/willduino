/*
 FadyEyeChip

 This makes Chip's eyes glow and dim in alternating order.

 The circuit:
 Chip OR
 * An LED and resistor attached from digital pin 11 to ground.
 * An LED and resistor attached from digital pin 10 to ground.

 Created December 13th 2014
 By Will Luongo
 */

int leftEye = 11;    // LED connected to digital pin 11
int rightEye = 10;   // LED connected to digital pin 10
int increment = 1;
int fadeMax= 150;
int fadeMin = 10;
int lFadeValue = fadeMin;
int lFadeIncrement = increment;
int rFadeValue = fadeMax;
int rFadeIncrement = -increment;
int delayTime = 5;


void setup() {
  // nothing happens in setup
}

void loop() {
  if (lFadeValue >= fadeMax)
    lFadeIncrement = -increment;
  if (rFadeValue >= fadeMax)
    rFadeIncrement = -increment;
  if (lFadeValue <= fadeMin)
    lFadeIncrement = increment;
  if (rFadeValue <= fadeMin)
    rFadeIncrement = increment;
  analogWrite(leftEye, lFadeValue);
  analogWrite(rightEye, rFadeValue);
  lFadeValue += lFadeIncrement;
  rFadeValue += rFadeIncrement;
  delay(delayTime);
}


