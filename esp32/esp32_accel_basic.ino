
/*
 This code is a basic test of reading an Analog Devices ADXL3xx accelerometer on an ESP32 microcontroller and communicates the
 acceleration to the computer via the serial monitor.  

Based on http://www.arduino.cc/en/Tutorial/ADXL3xx. Modified for the ESP32 by Charles Hamilton.
*/


const int xpin = 12;                  // x-axis of accelerometer
const int ypin = 13;                  // y-axis of accelerometer
const int zpin = 14;                  // z-axis of accelerometer


void setup() {
  // initialize the serial communications:
  Serial.begin(115200);
}

void loop() {
  // //Capture and print the x, y, z-axis data from accelerometer sensor values
  Serial.print(analogRead(xpin));
  // print a tab between values:
  Serial.print("\t");
  Serial.print(analogRead(ypin));
  // print a tab between values:
  Serial.print("\t");
  Serial.print(analogRead(zpin));
  Serial.println();
  // delay before next reading:
  delay(100);
}
