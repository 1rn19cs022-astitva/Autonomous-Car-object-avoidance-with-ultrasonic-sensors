#Autonomous Car object avoidance with ultrasonic sensors

Tools used:

1.2 DC motors

2.Arduino Uno

3.L298N Motor Driverboard

4.Bread board and connecting wires


Steps to attach the components:

1. Attach the the five ultra sonic sensors (front, front-left, front-right, left, right) to the Arduino board using the male-female dupont wires.
2. Attach the two power inputs from the battery and the groud pin from Arduino to the L298N motor driver board power input.
3. Remove the jumper if the power input is greater than 12V and connect the Vin from the Arduino board to the input.
4. Attach the motor terminals to the corresponding output sides of the L298N motor driver board.
5. Connect tthe Arduino board to the PC and upload the given code.
6. Use a power bank to power the Arduino board after uploading the code.
7. The car should work now.

Remember to attach the Sensors to the proper Arduino pins mentioned in the code.
