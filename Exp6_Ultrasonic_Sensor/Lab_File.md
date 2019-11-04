# Experiment 6 – Obstacle Detector And Distance Measuring Device


## Aim:
To design a Obstacle Detector And Distance Measuring Device.

## Apparatus:
Arduino Board, LED, Resistance - 220ohm, Breadboard, Wires, Ultrasonic Distance Sensor.

## Circuit Diagram:
![Exp6](https://user-images.githubusercontent.com/54620652/68085482-9405b780-fe67-11e9-9d5d-2ad2bf39aa9f.png)

## Theory:
**Concepts Used -**\
***LEDs:***\
An LED is a small light (it stands for "light emitting diode") that works with relatively little power. The Arduino board has one built-in on digital pin 13.
An external LED can also be used by specifying the pin number it is using on the Arduino.
In electronics, polarity indicates whether a circuit component is symmetric or not. LEDs, being diodes, will only allow current to flow in one direction. And when there’s no current-flow, there’s no light.
The positive side of the LED is called the “anode” and is marked by having a longer “lead,” or leg. The other, negative side of the LED is called the “cathode.” Current flows from the anode to the cathode and never the opposite direction. A reversed LED can keep an entire circuit from operating properly by blocking current flow. So don’t freak out if adding an LED breaks your circuit. Try flipping it around.\

**Learning and Observations -**
1. We can recognize the positive and negative terminals of an LED even without using a Multimeter. The longer leg of the LED is the positive terminal (or the anode) and the smaller leg is the negative terminal (or the cathode).
2. Another way of finding the positive and negative terminals of an LED is to see the parts inside the LED. The larger part is the negative side (i.e. the cathode) and the smaller part is the positive side (i.e. the anode).

## Problems and Troubleshooting:
1. The first problem that we faced was due to the cable of the Arduino which was not working properly. This problem was solved by using another cable.
2. The proper port of the Arduino was not selected. After it was selected the Arduino worked perfectly.
3. The code had some errors like proper pin was not mentioned, etc. But after modifying the code, everything worked perfectly fine.

## Precautions:
1. The Arduino and its cable should be working properly.
2. Proper port of the Arduino should be selected.
3. The connections should be made neat and clean.
4. Desired resistance should be used.
5. LDR Module Should be working properly.

## Arduino Code:
```
//Obstacle Detector And Distance Measuring Device
const int trig = 10;
const int echo = 9;
long duration;
int distance;

void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
    
  duration= pulseIn(echo, HIGH);
  distance= duration*0.034/2;
  
  Serial.print("Distance: ");
  Serial.println(distance);
}

## Result:
The obstacle and its distance was verified after uploading the program.
