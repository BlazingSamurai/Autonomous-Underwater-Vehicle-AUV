#include "HX711.h"
#include <Servo.h>

#define calibration_factor 21.318 //This value is obtained using the SparkFun_HX711_Calibration sketch

#define LOADCELL_DOUT_PIN  3
#define LOADCELL_SCK_PIN  2


Servo ESC;     // create servo object to control the ESC
HX711 scale;

int sec;

void setup() {
  Serial.begin(9600);
  Serial.println("HX711 scale demo");

  scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);
  scale.set_scale(calibration_factor); //This value is obtained by using the SparkFun_HX711_Calibration sketch
  scale.tare(); //Assuming there is no weight on the scale at start up, reset the scale to 0
  
  ESC.attach(9,1000,2000); // (pin, min pulse width, max pulse width in microseconds)
  
  Serial.println("Readings:");
}

void loop() {
  if (Serial.available()>1)
{
  sec = Serial.parseInt();
  Serial.println(sec);
}
  ESC.writeMicroseconds(sec);    // Send the signal to the ESC
  Serial.print("Reading: ");
  Serial.print(scale.get_units(), 1); //scale.get_units() returns a float
  Serial.print(" Decigrams"); //You can change this to kg but you'll need to refactor the calibration_factor
  Serial.println();
}
