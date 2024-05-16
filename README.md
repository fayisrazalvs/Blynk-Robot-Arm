# Blynk-Robot-Arm

This project is about developing a cheap DIY robotic arm model using the ESP8266 Module and Blynk application

## Required Materials

1. 4 MG90S Servo Motors
2. 7 18650 Lithium-ion Cells
3. 1 LM2596 Buck Converter
4. 1 ESP8266 Node MCU
5. 1 Breadboard
6. 1 Cap and Casing Pipe
7. 2 Switches
8. Jumper Wires (as necessary)
9. Zip Ties (as necessary)
10. 1 Single 18650 Holder
11. 3 Double 18650 Holders

## Working and Construction

* The Node MCU has an in-built wifi module which is connected to the internet through the code.
* In the Blynk android application we create a slider interface to control the pwm values of the servo motors the values range from 0 to 180 degrees as shown in the below image.

![Screenshot 2024-05-17 005803](https://github.com/fayisrazalvs/Blynk-Robot-Arm/assets/108331765/a3eebe26-fc90-41d0-abd1-3a272805d31e)

* Each servo motor is connected to the link ends of the robot arm. This makes a 180 degree rotating base, shoulder, elbow and wrist or the gripper.
* When the slider is moved the servo motor associated it moves to reach the desired angle or position.
* By adjusting the angles of each of the servo motors and the grippers a pick and place mechanism can be achieved.
* Make a note of the direction the servo motors turn from 0 to 180 degrees before connecting the links, So that when the sliders are moved the motor moves the links in the correct direction and not the opposite direction.
* I decided to use the cap and casing pipes for the links because it was cheap and readily available. It is also very easy to cut, bend and put holes into it also helped in hiding the wires of the servo motors.
* Other materials can also be used but the load capacity of the servo motors should also be considered in doing so. The motors capacity decreases in half each 1 cm to the previous.
* The maximum load the servo motor will be affected by the length of the links beacuse the weight of the links also adds up on the motors, The base and the elbow motor will be the ones to face this issue most.
* Since mine is only a demo working model and I don't plan on lifting loads greater than 2-5 grams I have used the MG90S servo motors and the shoulder and elbow links have a length of 5 cm.
* After assembling the servo motors and the links the robot arm looks like the following.
* I have used zip ties to secure the servo motors to the base and the links are connected to the shaft of the servo motors with screws that comes with the servo motors.

![Arm 1](https://github.com/fayisrazalvs/Blynk-Robot-Arm/assets/108331765/835fef01-5d56-48bc-8163-78e3ad061fca)

![Arm 3](https://github.com/fayisrazalvs/Blynk-Robot-Arm/assets/108331765/1556558b-3785-4b31-9c52-42b9b04b2118)

* In the wrist I have used a custom or diy mechanism for the gripper. A piece of plastic is fixed permanently at the end of the wrist perpandicularly with soft tape at the ends. And then another servo motor with a plastic piece and soft tape is fixed to the shaft of the servo motor.
* So, when the gripper servo motor is moved with a an object like a screw between its shaft and plastic piece it gets wedged and can be picked up by the arm. There are other options which are much simple and effective but for the sake of this project I decided to go with this setup. The Following image shows what the gripper looks like.

![Arm 4](https://github.com/fayisrazalvs/Blynk-Robot-Arm/assets/108331765/2760f069-24ec-4fa5-8d05-a057ddd73274)

## Wiring

* The circuit diagram for the controller of the robotic arm is as the following.

![Screenshot 2024-05-17 013628](https://github.com/fayisrazalvs/Blynk-Robot-Arm/assets/108331765/0ee6a616-5c2b-43c1-9c57-5be584d06ae2)

* The power supply for the servo motors and the node mcu are seperate. For the Servo motors I have used 6 18650 cells.
* There are a total of 3 pairs of batteries, each pair consist of 2 18650 cells connected in series. Since the 18650 have a voltage of 3.7 Volts it gives out 7.4 Volts when connected in series.
* To make the connections easy, I have placed the pairs in double 18650 cell holders.
* Each servo operates at around 4-7 Volts, and operating the 4 MG90S servos draws around 4 Amps of current.
* Since each 18650 cell produces around 1.5 Amps of current, To generate the 4 Amps operating current, I have connected the three pairs in parallel which increases the current output to 3 times the normal. This produces around 4.5 Amps of current.
* To supply a stable supply I have used and LM2596 DC-DC Buck Converter module which is set to output 6V.
* The Node MCU is powered by a seperate 18650 Cell placed in a single 18650 holder. The Nodu MCU is powered via the 3.7 Volt and ground pins.
* The supplies are looped through two switches individually for ease of use.
* The power supply for the robotic arm and the Node MCU is mounted on a breadboard along with the Node MCU.
* A breadboard is used to easily access the digital pwm pins of the Node MCU.

![Arm 2](https://github.com/fayisrazalvs/Blynk-Robot-Arm/assets/108331765/fec998ac-360e-4a74-9b4b-372a8ab0ffb6)

* The pwm pins of the Node MCU are connected to the signal pins of the 4 servo motors. Any pwm pin can be used if they are defined in the code and the virtual pins of the sliders in the Blynk android application are attached to send output signals to connected digital pin on the Node MCU.
* In this project I have connected the **D1** pin to base servo motor(Servo1), **D2** pin for the shoulder(Servo2) servo motor, **D3** pin for elbow(Servo3) servo motor, **D4** pin for the gripper(Servo4) servo motor.
* The arduino sketch is included in the repository.

## Conclusion

I know there are a lot of issues and discrepancies with this project, and that this project can be done in more efficient, advanced and better method. But since this is my first ever robotics/electronics project, I don't wish for it to turn out any other way. The fact that only matters is that I made it to work. I hope that in the future, when I have mastered the field, I can look back to this project to be reminded about my humble beginnings and how far I have come.

---






