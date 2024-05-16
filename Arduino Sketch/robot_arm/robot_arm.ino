//Project: IoT Controlled Robotic Arm
//Author: Razal Fayis V. S.
//Date: 8 January, 2023
//Note: The libraries and other dependencies used in the following code are suspect to change depending on the original deveolpers of the dependencies such as the Blynk Application.

//Define the variables.
#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "BLYNK TEMPLATE ID"
#define BLYNK_DEVICE_NAME "IoTRoboticArm"
#define BLYNK_AUTH_TOKEN "BLYNK AUTH TOKEN"

//Include the necessary libraries.
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

//Attach the servo library to the variables to enable pwm comms.
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

//Enter the Blynk auth token and wifi address and password for the Node MCU to connect.
char auth[] = "Authentication Token";
char ssid[] = "WI-FI NAME";
char pass[] = "WI-FI PASSWORD";
void setup()

//Begin the serial comms at 9600 baud.
//Begin the Blynk connection.
{
Serial.begin(9600);
Blynk.begin(auth, ssid, pass);

//attach the servos to the Node MCU pins
servo1.attach(1); // NodeMCU D1 pin
servo2.attach(2); // NodeMCU D2 pin
servo3.attach(3); // NodeMCU D3 pin
servo4.attach(4); // NodeMCU D4 pin
}

//Begin loop function.
void loop()

//Execute the Blynk function and give output to the Node MCU pins when input from virtual pins V1, V2, V3, V4 attached to the Blynk application slider interfaces are received
{
Blynk.run();
}
BLYNK_WRITE(V1)
{
servo1.write(param.asInt());
}
BLYNK_WRITE(V2)
{
servo2.write(param.asInt());
}
BLYNK_WRITE(V3)
{
servo3.write(param.asInt());
}
BLYNK_WRITE(V4)

{
servo4.write(param.asInt());
}
BLYNK_WRITE(V5)
{
servo5.write(param.asInt());
}
