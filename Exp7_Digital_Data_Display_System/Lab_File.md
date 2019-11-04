# Experiment 7 – Programmable Digital Data Display System


## Aim:
To design a LCD which displays the programmed digital data.

## Apparatus:
Arduino Board, Resistance - 220ohm, Breadboard, Wires, LCD, Potentiometer.

## Circuit Diagram:
![Exp7](https://user-images.githubusercontent.com/54620652/68085492-a253d380-fe67-11e9-940d-fa6579892993.png)

## Theory:
**Concepts Used -**\
***LCD:***\
LCD (Liquid Crystal Display) is a type of flat panel display which uses liquid crystals in its primary form of operation. LEDs have a large and varying set of use cases for consumers and businesses, as they can be commonly found in smartphones, televisions, computer monitors and instrument panels.\

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
//Programmable Digital Data Display system
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  
  lcd.begin(16, 2);

  lcd.print("EXP 7");
}

void loop() {
  
  lcd.setCursor(0, 1);
  lcd.print(millis() / 1000);
}

## Result:
The Programmed Digital Data was displayed on the LCD after uploading the program.
