#include "CurieIMU.h"
#include "CurieBLE.h"
#include "CurieTimerOne.h"
void setup() {
 /* Initialise the IMU */
  CurieIMU.begin();

  CurieIMU.setAccelerometerRange(4);

}

// the loop function runs over and over again forever
void loop() {
    float ax, ay, az;   //scaled accelerometer values

  // read accelerometer measurements from device, scaled to the configured range
  CurieIMU.readAccelerometerScaled(ax, ay, az);

  Serial.print("a:\t");
  Serial.print(ax);
  Serial.print("\t");
  Serial.print(ay);
  Serial.print("\t");
  Serial.print(az);
  Serial.println();
}

