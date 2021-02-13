//We must include these libraries

#include <LiquidCrystal.h>

#include <LedControl.h>

#include "Matrix.h"

/*
 Now we need Pin Numbers to work with.
 *** These pin numbers may not work with your hardware ***
 pin 4 is connected to the DataIn 
 pin 3 is connected to LOAD(CS)
 pin 2 is connected to the CLK 
 I am using only a single MAX7219.
 */
LedControl lc=LedControl(4,2,3,1);
/* set this variable from 1 to 15 for changing the screen brightness */
unsigned long ScreenIntensity=4;

/* set these delays to what ever you prefer */
unsigned long waittime1=3;

unsigned long waittime2=125;

unsigned long waittime3=350;

unsigned long waittime4=75;

unsigned long waittime5=150;

unsigned long waittime6=150;
void setup() {
  /*
   The MAX72XX is in power-saving mode on startup,
   we have to do a wakeup call
   */
  lc.shutdown(0,false);
  /* Set the brightness to a medium values */
  lc.setIntensity(0,ScreenIntensity);
  /* and clear the display */
  lc.clearDisplay(0);
  
  delay(250);
  
  fillup();
  delay(waittime2 * 5);
  lineG();
  delay(waittime2);
  lineC();
  delay(waittime2);
  lineD();
  delay(waittime2);
  lineA();
  delay(waittime2);
  lineB();
  lineI();
  lineI();
  lineJ();
}

void lineA() {
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000001);
  
  delay(waittime1 * 5);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000001);
  lc.setRow(0,7,B00000010);
  
  delay(waittime1 * 8);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000001);
  lc.setRow(0,6,B00000010);
  lc.setRow(0,7,B00000100);
  
  delay(waittime1 * 11);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000001);
  lc.setRow(0,5,B00000010);
  lc.setRow(0,6,B00000100);
  lc.setRow(0,7,B00001000);
  
  delay(waittime1 * 14);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000001);
  lc.setRow(0,4,B00000010);
  lc.setRow(0,5,B00000100);
  lc.setRow(0,6,B00001000);
  lc.setRow(0,7,B00010000);
  
  delay(waittime1 * 17);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000001);
  lc.setRow(0,3,B00000010);
  lc.setRow(0,4,B00000100);
  lc.setRow(0,5,B00001000);
  lc.setRow(0,6,B00010000);
  lc.setRow(0,7,B00100000);
  
  delay(waittime1 * 20);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000001);
  lc.setRow(0,2,B00000010);
  lc.setRow(0,3,B00000100);
  lc.setRow(0,4,B00001000);
  lc.setRow(0,5,B00010000);
  lc.setRow(0,6,B00100000);
  lc.setRow(0,7,B01000000);
  
  delay(waittime1 * 22);
  
  lc.setRow(0,0,B00000001);
  lc.setRow(0,1,B00000010);
  lc.setRow(0,2,B00000100);
  lc.setRow(0,3,B00001000);
  lc.setRow(0,4,B00010000);
  lc.setRow(0,5,B00100000);
  lc.setRow(0,6,B01000000);
  lc.setRow(0,7,B10000000);
  
  delay(waittime1 * 25);
  
  lc.setRow(0,0,B00000010);
  lc.setRow(0,1,B00000100);
  lc.setRow(0,2,B00001000);
  lc.setRow(0,3,B00010000);
  lc.setRow(0,4,B00100000);
  lc.setRow(0,5,B01000000);
  lc.setRow(0,6,B10000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 22);
  
  lc.setRow(0,0,B00000100);
  lc.setRow(0,1,B00001000);
  lc.setRow(0,2,B00010000);
  lc.setRow(0,3,B00100000);
  lc.setRow(0,4,B01000000);
  lc.setRow(0,5,B10000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 20);
  
  lc.setRow(0,0,B00001000);
  lc.setRow(0,1,B00010000);
  lc.setRow(0,2,B00100000);
  lc.setRow(0,3,B01000000);
  lc.setRow(0,4,B10000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 17);
  
  lc.setRow(0,0,B00010000);
  lc.setRow(0,1,B00100000);
  lc.setRow(0,2,B01000000);
  lc.setRow(0,3,B1000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 14);
  
  lc.setRow(0,0,B00100000);
  lc.setRow(0,1,B01000000);
  lc.setRow(0,2,B10000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 11);
  
  lc.setRow(0,0,B01000000);
  lc.setRow(0,1,B10000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 8);
  
  lc.setRow(0,0,B10000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 5);
}





void lineB() {
  lc.setRow(0,0,B10000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 5);
  
  lc.setRow(0,0,B01000000);
  lc.setRow(0,1,B10000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 8);
  
  lc.setRow(0,0,B00100000);
  lc.setRow(0,1,B01000000);
  lc.setRow(0,2,B10000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 11);
  
  lc.setRow(0,0,B00010000);
  lc.setRow(0,1,B00100000);
  lc.setRow(0,2,B01000000);
  lc.setRow(0,3,B1000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 14);
  
  lc.setRow(0,0,B00001000);
  lc.setRow(0,1,B00010000);
  lc.setRow(0,2,B00100000);
  lc.setRow(0,3,B01000000);
  lc.setRow(0,4,B10000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 17);
  
  lc.setRow(0,0,B00000100);
  lc.setRow(0,1,B00001000);
  lc.setRow(0,2,B00010000);
  lc.setRow(0,3,B00100000);
  lc.setRow(0,4,B01000000);
  lc.setRow(0,5,B10000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 20);
  
  lc.setRow(0,0,B00000010);
  lc.setRow(0,1,B00000100);
  lc.setRow(0,2,B00001000);
  lc.setRow(0,3,B00010000);
  lc.setRow(0,4,B00100000);
  lc.setRow(0,5,B01000000);
  lc.setRow(0,6,B10000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 22);
  
  lc.setRow(0,0,B00000001);
  lc.setRow(0,1,B00000010);
  lc.setRow(0,2,B00000100);
  lc.setRow(0,3,B00001000);
  lc.setRow(0,4,B00010000);
  lc.setRow(0,5,B00100000);
  lc.setRow(0,6,B01000000);
  lc.setRow(0,7,B10000000);
  
  delay(waittime1 * 25);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000001);
  lc.setRow(0,2,B00000010);
  lc.setRow(0,3,B00000100);
  lc.setRow(0,4,B00001000);
  lc.setRow(0,5,B00010000);
  lc.setRow(0,6,B00100000);
  lc.setRow(0,7,B01000000);
  
  delay(waittime1 * 22);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000001);
  lc.setRow(0,3,B00000010);
  lc.setRow(0,4,B00000100);
  lc.setRow(0,5,B00001000);
  lc.setRow(0,6,B00010000);
  lc.setRow(0,7,B00100000);
  
  delay(waittime1 * 20);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000001);
  lc.setRow(0,4,B00000010);
  lc.setRow(0,5,B00000100);
  lc.setRow(0,6,B00001000);
  lc.setRow(0,7,B00010000);
  
  delay(waittime1 * 17);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000001);
  lc.setRow(0,5,B00000010);
  lc.setRow(0,6,B00000100);
  lc.setRow(0,7,B00001000);
  
  delay(waittime1 * 14);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000001);
  lc.setRow(0,6,B00000010);
  lc.setRow(0,7,B00000100);
  
  delay(waittime1 * 11);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000001);
  lc.setRow(0,7,B00000010);
  
  delay(waittime1 * 8);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000001);
  
  delay(waittime1 * 5);
}






void lineC() {
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B10000000);
  
  delay(waittime1 * 5);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B10000000);
  lc.setRow(0,7,B01000000);
  
  delay(waittime1 * 8);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B10000000);
  lc.setRow(0,6,B01000000);
  lc.setRow(0,7,B00100000);
  
  delay(waittime1 * 11);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B10000000);
  lc.setRow(0,5,B01000000);
  lc.setRow(0,6,B00100000);
  lc.setRow(0,7,B00010000);
  
  delay(waittime1 * 14);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B10000000);
  lc.setRow(0,4,B01000000);
  lc.setRow(0,5,B00100000);
  lc.setRow(0,6,B00010000);
  lc.setRow(0,7,B00001000);
  
  delay(waittime1 * 17);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B10000000);
  lc.setRow(0,3,B01000000);
  lc.setRow(0,4,B00100000);
  lc.setRow(0,5,B00010000);
  lc.setRow(0,6,B00001000);
  lc.setRow(0,7,B00000100);
  
  delay(waittime1 * 20);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B10000000);
  lc.setRow(0,2,B01000000);
  lc.setRow(0,3,B00100000);
  lc.setRow(0,4,B00010000);
  lc.setRow(0,5,B00001000);
  lc.setRow(0,6,B00000100);
  lc.setRow(0,7,B00000010);
  
  delay(waittime1 * 22);
  
  lc.setRow(0,0,B10000000);
  lc.setRow(0,1,B01000000);
  lc.setRow(0,2,B00100000);
  lc.setRow(0,3,B00010000);
  lc.setRow(0,4,B00001000);
  lc.setRow(0,5,B00000100);
  lc.setRow(0,6,B00000010);
  lc.setRow(0,7,B00000001);
  
  delay(waittime1 * 25);
  
  lc.setRow(0,0,B01000000);
  lc.setRow(0,1,B00100000);
  lc.setRow(0,2,B00010000);
  lc.setRow(0,3,B00001000);
  lc.setRow(0,4,B00000100);
  lc.setRow(0,5,B00000010);
  lc.setRow(0,6,B00000001);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 22);
  
  lc.setRow(0,0,B00100000);
  lc.setRow(0,1,B00010000);
  lc.setRow(0,2,B00001000);
  lc.setRow(0,3,B00000100);
  lc.setRow(0,4,B00000010);
  lc.setRow(0,5,B00000001);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 20);
  
  lc.setRow(0,0,B00010000);
  lc.setRow(0,1,B00001000);
  lc.setRow(0,2,B00000100);
  lc.setRow(0,3,B00000010);
  lc.setRow(0,4,B00000001);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 17);
  
  lc.setRow(0,0,B00001000);
  lc.setRow(0,1,B00000100);
  lc.setRow(0,2,B00000010);
  lc.setRow(0,3,B00000001);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 14);
  
  lc.setRow(0,0,B00000100);
  lc.setRow(0,1,B00000010);
  lc.setRow(0,2,B00000001);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 11);
  
  lc.setRow(0,0,B00000010);
  lc.setRow(0,1,B00000001);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 8);
  
  lc.setRow(0,0,B00000001);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 5);
}







void lineD() {
  lc.setRow(0,0,B00000001);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 5);

  lc.setRow(0,0,B00000010);
  lc.setRow(0,1,B00000001);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 8);
  
  lc.setRow(0,0,B00000100);
  lc.setRow(0,1,B00000010);
  lc.setRow(0,2,B00000001);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 11);
  
  lc.setRow(0,0,B00001000);
  lc.setRow(0,1,B00000100);
  lc.setRow(0,2,B00000010);
  lc.setRow(0,3,B00000001);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 14);
  
  lc.setRow(0,0,B00010000);
  lc.setRow(0,1,B00001000);
  lc.setRow(0,2,B00000100);
  lc.setRow(0,3,B00000010);
  lc.setRow(0,4,B00000001);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 17);
  
  lc.setRow(0,0,B00100000);
  lc.setRow(0,1,B00010000);
  lc.setRow(0,2,B00001000);
  lc.setRow(0,3,B00000100);
  lc.setRow(0,4,B00000010);
  lc.setRow(0,5,B00000001);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 20);
  
  lc.setRow(0,0,B01000000);
  lc.setRow(0,1,B00100000);
  lc.setRow(0,2,B00010000);
  lc.setRow(0,3,B00001000);
  lc.setRow(0,4,B00000100);
  lc.setRow(0,5,B00000010);
  lc.setRow(0,6,B00000001);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 22);
  
  lc.setRow(0,0,B10000000);
  lc.setRow(0,1,B01000000);
  lc.setRow(0,2,B00100000);
  lc.setRow(0,3,B00010000);
  lc.setRow(0,4,B00001000);
  lc.setRow(0,5,B00000100);
  lc.setRow(0,6,B00000010);
  lc.setRow(0,7,B00000001);
  
  delay(waittime1 * 25);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B10000000);
  lc.setRow(0,2,B01000000);
  lc.setRow(0,3,B00100000);
  lc.setRow(0,4,B00010000);
  lc.setRow(0,5,B00001000);
  lc.setRow(0,6,B00000100);
  lc.setRow(0,7,B00000010);
  
  delay(waittime1 * 22);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B10000000);
  lc.setRow(0,3,B01000000);
  lc.setRow(0,4,B00100000);
  lc.setRow(0,5,B00010000);
  lc.setRow(0,6,B00001000);
  lc.setRow(0,7,B00000100);
  
  delay(waittime1 * 20);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B10000000);
  lc.setRow(0,4,B01000000);
  lc.setRow(0,5,B00100000);
  lc.setRow(0,6,B00010000);
  lc.setRow(0,7,B00001000);
  
  delay(waittime1 * 17);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B10000000);
  lc.setRow(0,5,B01000000);
  lc.setRow(0,6,B00100000);
  lc.setRow(0,7,B00010000);
  
  delay(waittime1 * 14);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B10000000);
  lc.setRow(0,6,B01000000);
  lc.setRow(0,7,B00100000);
  
  delay(waittime1 * 11);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B10000000);
  lc.setRow(0,7,B01000000);
  
  delay(waittime1 * 8);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B10000000);
  
  delay(waittime1 * 5);
}







void lineE() {
  lc.setRow(0,0,B11111111);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 13);

  lc.setRow(0,0,B11111111);
  lc.setRow(0,1,B11111111);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 16);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B11111111);
  lc.setRow(0,2,B11111111);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 19);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B11111111);
  lc.setRow(0,3,B11111111);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 22);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B11111111);
  lc.setRow(0,4,B11111111);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 25);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B11111111);
  lc.setRow(0,5,B11111111);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 28);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B11111111);
  lc.setRow(0,6,B11111111);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 31);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B11111111);
  lc.setRow(0,7,B11111111);
  
  delay(waittime1 * 34);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B11111111);
  
  delay(waittime1 * 37);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B11111111);
  lc.setRow(0,7,B11111111);
  
  delay(waittime1 * 40);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B11111111);
  lc.setRow(0,6,B11111111);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 43);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B11111111);
  lc.setRow(0,5,B11111111);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 46);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B11111111);
  lc.setRow(0,4,B11111111);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 48);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B11111111);
  lc.setRow(0,3,B11111111);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 50);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B11111111);
  lc.setRow(0,2,B11111111);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 52);
  
  lc.setRow(0,0,B11111111);
  lc.setRow(0,1,B11111111);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 54);

  lc.setRow(0,0,B11111111);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 55);
}








void lineF() {
  lc.setRow(0,0,B11111111);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 24);

  lc.setRow(0,0,B11111111);
  lc.setRow(0,1,B11111111);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 29);
  
  lc.setRow(0,0,B11111111);
  lc.setRow(0,1,B11111111);
  lc.setRow(0,2,B11111111);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 34);
  
  lc.setRow(0,0,B11111111);
  lc.setRow(0,1,B11111111);
  lc.setRow(0,2,B11111111);
  lc.setRow(0,3,B11111111);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 40);
  
  lc.setRow(0,0,B11111111);
  lc.setRow(0,1,B11111111);
  lc.setRow(0,2,B11111111);
  lc.setRow(0,3,B11111111);
  lc.setRow(0,4,B11111111);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 47);
  
  lc.setRow(0,0,B11111111);
  lc.setRow(0,1,B11111111);
  lc.setRow(0,2,B11111111);
  lc.setRow(0,3,B11111111);
  lc.setRow(0,4,B11111111);
  lc.setRow(0,5,B11111111);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 55);
  
  lc.setRow(0,0,B11111111);
  lc.setRow(0,1,B11111111);
  lc.setRow(0,2,B11111111);
  lc.setRow(0,3,B11111111);
  lc.setRow(0,4,B11111111);
  lc.setRow(0,5,B11111111);
  lc.setRow(0,6,B11111111);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 65);
  
  lc.setRow(0,0,B11111111);
  lc.setRow(0,1,B11111111);
  lc.setRow(0,2,B11111111);
  lc.setRow(0,3,B11111111);
  lc.setRow(0,4,B11111111);
  lc.setRow(0,5,B11111111);
  lc.setRow(0,6,B11111111);
  lc.setRow(0,7,B11111111);
  
  delay(waittime1 * 72);
}








void lineG() {
  lc.setRow(0,0,B11111111);
  lc.setRow(0,1,B11111111);
  lc.setRow(0,2,B11111111);
  lc.setRow(0,3,B11111111);
  lc.setRow(0,4,B11111111);
  lc.setRow(0,5,B11111111);
  lc.setRow(0,6,B11111111);
  lc.setRow(0,7,B11111111);
  
  delay(waittime1 * 10);

  lc.setRow(0,0,B11111111);
  lc.setRow(0,1,B01111110);
  lc.setRow(0,2,B11111111);
  lc.setRow(0,3,B01111110);
  lc.setRow(0,4,B11111111);
  lc.setRow(0,5,B01111110);
  lc.setRow(0,6,B11111111);
  lc.setRow(0,7,B01111110);
  
  delay(waittime1 * 80);
  
  lc.setRow(0,0,B11111111);
  lc.setRow(0,1,B00111100);
  lc.setRow(0,2,B11111111);
  lc.setRow(0,3,B00111100);
  lc.setRow(0,4,B11111111);
  lc.setRow(0,5,B00111100);
  lc.setRow(0,6,B11111111);
  lc.setRow(0,7,B00111100);
  
  delay(waittime1 * 70);
  
  lc.setRow(0,0,B11111111);
  lc.setRow(0,1,B00011000);
  lc.setRow(0,2,B11111111);
  lc.setRow(0,3,B00011000);
  lc.setRow(0,4,B11111111);
  lc.setRow(0,5,B00011000);
  lc.setRow(0,6,B11111111);
  lc.setRow(0,7,B00011000);
  
  delay(waittime1 * 60);
  
  lc.setRow(0,0,B11111111);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B11111111);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B11111111);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B11111111);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 90);
  
  lc.setRow(0,0,B11111111);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B11111111);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B11111111);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B11111111);
  
  delay(waittime1 * 50);

  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B11111111);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B11111111);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 50);
  
  lc.setRow(0,0,B11111111);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B11111111);
  
  delay(waittime1 * 50);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime1 * 50);
}








void lineH() {  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime3);
  
  lc.setRow(0,0,B10000000);
  lc.setRow(0,1,B10000000);
  lc.setRow(0,2,B10000000);
  lc.setRow(0,3,B10000000);
  lc.setRow(0,4,B10000000);
  lc.setRow(0,5,B10000000);
  lc.setRow(0,6,B10000000);
  lc.setRow(0,7,B10000000);
  
  delay(waittime3);

  lc.setRow(0,0,B11000000);
  lc.setRow(0,1,B11000000);
  lc.setRow(0,2,B11000000);
  lc.setRow(0,3,B11000000);
  lc.setRow(0,4,B11000000);
  lc.setRow(0,5,B11000000);
  lc.setRow(0,6,B11000000);
  lc.setRow(0,7,B11000000);
  
  delay(waittime3);
  
  lc.setRow(0,0,B01100000);
  lc.setRow(0,1,B01100000);
  lc.setRow(0,2,B01100000);
  lc.setRow(0,3,B01100000);
  lc.setRow(0,4,B01100000);
  lc.setRow(0,5,B01100000);
  lc.setRow(0,6,B01100000);
  lc.setRow(0,7,B01100000);
  
  delay(waittime3);
  
  lc.setRow(0,0,B00110000);
  lc.setRow(0,1,B00110000);
  lc.setRow(0,2,B00110000);
  lc.setRow(0,3,B00110000);
  lc.setRow(0,4,B00110000);
  lc.setRow(0,5,B00110000);
  lc.setRow(0,6,B00110000);
  lc.setRow(0,7,B00110000);
  
  delay(waittime3);
  
  lc.setRow(0,0,B00011000);
  lc.setRow(0,1,B00011000);
  lc.setRow(0,2,B00011000);
  lc.setRow(0,3,B00011000);
  lc.setRow(0,4,B00011000);
  lc.setRow(0,5,B00011000);
  lc.setRow(0,6,B00011000);
  lc.setRow(0,7,B00011000);
  
  delay(waittime3);
  
  lc.setRow(0,0,B00111000);
  lc.setRow(0,1,B00011000);
  lc.setRow(0,2,B00011000);
  lc.setRow(0,3,B00011000);
  lc.setRow(0,4,B00011000);
  lc.setRow(0,5,B00011000);
  lc.setRow(0,6,B00011000);
  lc.setRow(0,7,B00011100);
  
  delay(waittime4);

  lc.setRow(0,0,B00110000);
  lc.setRow(0,1,B00111000);
  lc.setRow(0,2,B00011000);
  lc.setRow(0,3,B00011000);
  lc.setRow(0,4,B00011000);
  lc.setRow(0,5,B00011000);
  lc.setRow(0,6,B00011100);
  lc.setRow(0,7,B00001100);
  
  delay(waittime4);
  
  lc.setRow(0,0,B01110000);
  lc.setRow(0,1,B00111000);
  lc.setRow(0,2,B00111000);
  lc.setRow(0,3,B00011000);
  lc.setRow(0,4,B00011000);
  lc.setRow(0,5,B00011100);
  lc.setRow(0,6,B00011100);
  lc.setRow(0,7,B00001110);
  
  delay(waittime4);
  
  lc.setRow(0,0,B11100000);
  lc.setRow(0,1,B01110000);
  lc.setRow(0,2,B00110000);
  lc.setRow(0,3,B00011000);
  lc.setRow(0,4,B00011000);
  lc.setRow(0,5,B00001100);
  lc.setRow(0,6,B00001110);
  lc.setRow(0,7,B00000111);
  
  delay(waittime4);
  
  lc.setRow(0,0,B11000000);
  lc.setRow(0,1,B11100000);
  lc.setRow(0,2,B01110000);
  lc.setRow(0,3,B00111000);
  lc.setRow(0,4,B00011100);
  lc.setRow(0,5,B00001110);
  lc.setRow(0,6,B00000111);
  lc.setRow(0,7,B00000011);
  
  delay(waittime4);
  
  lc.setRow(0,0,B10000000);
  lc.setRow(0,1,B11000000);
  lc.setRow(0,2,B01100000);
  lc.setRow(0,3,B00111000);
  lc.setRow(0,4,B00011100);
  lc.setRow(0,5,B00000110);
  lc.setRow(0,6,B00000011);
  lc.setRow(0,7,B00000001);
  
  delay(waittime4);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B10000000);
  lc.setRow(0,2,B11100000);
  lc.setRow(0,3,B00111000);
  lc.setRow(0,4,B00011100);
  lc.setRow(0,5,B00000111);
  lc.setRow(0,6,B00000001);
  lc.setRow(0,7,B00000000);
  
  delay(waittime4);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B10000000);
  lc.setRow(0,3,B11110000);
  lc.setRow(0,4,B00001111);
  lc.setRow(0,5,B00000001);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime4);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B11111111);
  lc.setRow(0,4,B11111111);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime4);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000001);
  lc.setRow(0,3,B00001111);
  lc.setRow(0,4,B11110000);
  lc.setRow(0,5,B10000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime4);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000001);
  lc.setRow(0,2,B00000111);
  lc.setRow(0,3,B00011100);
  lc.setRow(0,4,B00111000);
  lc.setRow(0,5,B11100000);
  lc.setRow(0,6,B10000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime4);
  
  lc.setRow(0,0,B00000001);
  lc.setRow(0,1,B00000011);
  lc.setRow(0,2,B00000110);
  lc.setRow(0,3,B00011100);
  lc.setRow(0,4,B00111000);
  lc.setRow(0,5,B01100000);
  lc.setRow(0,6,B11000000);
  lc.setRow(0,7,B10000000);
  
  delay(waittime4);
  
  lc.setRow(0,0,B00000011);
  lc.setRow(0,1,B00000111);
  lc.setRow(0,2,B00001110);
  lc.setRow(0,3,B00011100);
  lc.setRow(0,4,B00111000);
  lc.setRow(0,5,B01110000);
  lc.setRow(0,6,B11100000);
  lc.setRow(0,7,B11000000);
  
  delay(waittime4);
  
  lc.setRow(0,0,B00000111);
  lc.setRow(0,1,B00001110);
  lc.setRow(0,2,B00001100);
  lc.setRow(0,3,B00011000);
  lc.setRow(0,4,B00011000);
  lc.setRow(0,5,B00110000);
  lc.setRow(0,6,B01110000);
  lc.setRow(0,7,B11100000);
  
  delay(waittime4);
  
  lc.setRow(0,0,B00001110);
  lc.setRow(0,1,B00011100);
  lc.setRow(0,2,B00011100);
  lc.setRow(0,3,B00011000);
  lc.setRow(0,4,B00011000);
  lc.setRow(0,5,B00111000);
  lc.setRow(0,6,B00111000);
  lc.setRow(0,7,B01110000);
  
  delay(waittime4);

  lc.setRow(0,0,B00001100);
  lc.setRow(0,1,B00011100);
  lc.setRow(0,2,B00011000);
  lc.setRow(0,3,B00011000);
  lc.setRow(0,4,B00011000);
  lc.setRow(0,5,B00011000);
  lc.setRow(0,6,B00111000);
  lc.setRow(0,7,B00110000);
  
  delay(waittime4);
  
  lc.setRow(0,0,B00011100);
  lc.setRow(0,1,B00011000);
  lc.setRow(0,2,B00011000);
  lc.setRow(0,3,B00011000);
  lc.setRow(0,4,B00011000);
  lc.setRow(0,5,B00011000);
  lc.setRow(0,6,B00011000);
  lc.setRow(0,7,B00111000);
  
  delay(waittime4);
  
  lc.setRow(0,0,B00011000);
  lc.setRow(0,1,B00011000);
  lc.setRow(0,2,B00011000);
  lc.setRow(0,3,B00011000);
  lc.setRow(0,4,B00011000);
  lc.setRow(0,5,B00011000);
  lc.setRow(0,6,B00011000);
  lc.setRow(0,7,B00011000);
}









void lineI() {
  lc.setRow(0,0,B00111000);
  lc.setRow(0,1,B00011000);
  lc.setRow(0,2,B00011000);
  lc.setRow(0,3,B00011000);
  lc.setRow(0,4,B00011000);
  lc.setRow(0,5,B00011000);
  lc.setRow(0,6,B00011000);
  lc.setRow(0,7,B00011100);
  
  delay(waittime4);

  lc.setRow(0,0,B00110000);
  lc.setRow(0,1,B00111000);
  lc.setRow(0,2,B00011000);
  lc.setRow(0,3,B00011000);
  lc.setRow(0,4,B00011000);
  lc.setRow(0,5,B00011000);
  lc.setRow(0,6,B00011100);
  lc.setRow(0,7,B00001100);
  
  delay(waittime4);
  
  lc.setRow(0,0,B01110000);
  lc.setRow(0,1,B00111000);
  lc.setRow(0,2,B00111000);
  lc.setRow(0,3,B00011000);
  lc.setRow(0,4,B00011000);
  lc.setRow(0,5,B00011100);
  lc.setRow(0,6,B00011100);
  lc.setRow(0,7,B00001110);
  
  delay(waittime4);
  
  lc.setRow(0,0,B11100000);
  lc.setRow(0,1,B01110000);
  lc.setRow(0,2,B00110000);
  lc.setRow(0,3,B00011000);
  lc.setRow(0,4,B00011000);
  lc.setRow(0,5,B00001100);
  lc.setRow(0,6,B00001110);
  lc.setRow(0,7,B00000111);
  
  delay(waittime4);
  
  lc.setRow(0,0,B11000000);
  lc.setRow(0,1,B11100000);
  lc.setRow(0,2,B01110000);
  lc.setRow(0,3,B00111000);
  lc.setRow(0,4,B00011100);
  lc.setRow(0,5,B00001110);
  lc.setRow(0,6,B00000111);
  lc.setRow(0,7,B00000011);
  
  delay(waittime4);
  
  lc.setRow(0,0,B10000000);
  lc.setRow(0,1,B11000000);
  lc.setRow(0,2,B01100000);
  lc.setRow(0,3,B00111000);
  lc.setRow(0,4,B00011100);
  lc.setRow(0,5,B00000110);
  lc.setRow(0,6,B00000011);
  lc.setRow(0,7,B00000001);
  
  delay(waittime4);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B10000000);
  lc.setRow(0,2,B11100000);
  lc.setRow(0,3,B00111000);
  lc.setRow(0,4,B00011100);
  lc.setRow(0,5,B00000111);
  lc.setRow(0,6,B00000001);
  lc.setRow(0,7,B00000000);
  
  delay(waittime4);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B10000000);
  lc.setRow(0,3,B11111000);
  lc.setRow(0,4,B00011111);
  lc.setRow(0,5,B00000001);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime4);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B11111111);
  lc.setRow(0,4,B11111111);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime4);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000001);
  lc.setRow(0,3,B00011111);
  lc.setRow(0,4,B11111000);
  lc.setRow(0,5,B10000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime4);
  
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000001);
  lc.setRow(0,2,B00000111);
  lc.setRow(0,3,B00011100);
  lc.setRow(0,4,B00111000);
  lc.setRow(0,5,B11100000);
  lc.setRow(0,6,B10000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime4);
  
  lc.setRow(0,0,B00000001);
  lc.setRow(0,1,B00000011);
  lc.setRow(0,2,B00000110);
  lc.setRow(0,3,B00011100);
  lc.setRow(0,4,B00111000);
  lc.setRow(0,5,B01100000);
  lc.setRow(0,6,B11000000);
  lc.setRow(0,7,B10000000);
  
  delay(waittime4);
  
  lc.setRow(0,0,B00000011);
  lc.setRow(0,1,B00000111);
  lc.setRow(0,2,B00001110);
  lc.setRow(0,3,B00011100);
  lc.setRow(0,4,B00111000);
  lc.setRow(0,5,B01110000);
  lc.setRow(0,6,B11100000);
  lc.setRow(0,7,B11000000);
  
  delay(waittime4);
  
  lc.setRow(0,0,B00000111);
  lc.setRow(0,1,B00001110);
  lc.setRow(0,2,B00001100);
  lc.setRow(0,3,B00011000);
  lc.setRow(0,4,B00011000);
  lc.setRow(0,5,B00110000);
  lc.setRow(0,6,B01110000);
  lc.setRow(0,7,B11100000);
  
  delay(waittime4);
  
  lc.setRow(0,0,B00001110);
  lc.setRow(0,1,B00011100);
  lc.setRow(0,2,B00011100);
  lc.setRow(0,3,B00011000);
  lc.setRow(0,4,B00011000);
  lc.setRow(0,5,B00111000);
  lc.setRow(0,6,B00111000);
  lc.setRow(0,7,B01110000);
  
  delay(waittime4);

  lc.setRow(0,0,B00001100);
  lc.setRow(0,1,B00011100);
  lc.setRow(0,2,B00011000);
  lc.setRow(0,3,B00011000);
  lc.setRow(0,4,B00011000);
  lc.setRow(0,5,B00011000);
  lc.setRow(0,6,B00111000);
  lc.setRow(0,7,B00110000);
  
  delay(waittime4);
  
  lc.setRow(0,0,B00011100);
  lc.setRow(0,1,B00011000);
  lc.setRow(0,2,B00011000);
  lc.setRow(0,3,B00011000);
  lc.setRow(0,4,B00011000);
  lc.setRow(0,5,B00011000);
  lc.setRow(0,6,B00011000);
  lc.setRow(0,7,B00111000);
  
  delay(waittime4);
  
  lc.setRow(0,0,B00011000);
  lc.setRow(0,1,B00011000);
  lc.setRow(0,2,B00011000);
  lc.setRow(0,3,B00011000);
  lc.setRow(0,4,B00011000);
  lc.setRow(0,5,B00011000);
  lc.setRow(0,6,B00011000);
  lc.setRow(0,7,B00011000);
}








void lineJ() {
  lc.setRow(0,0,B00011000);
  lc.setRow(0,1,B00011000);
  lc.setRow(0,2,B00011000);
  lc.setRow(0,3,B00011000);
  lc.setRow(0,4,B00011000);
  lc.setRow(0,5,B00011000);
  lc.setRow(0,6,B00011000);
  lc.setRow(0,7,B00011000);
  
  delay(waittime5);

  lc.setRow(0,0,B00001000);
  lc.setRow(0,1,B00001100);
  lc.setRow(0,2,B00001100);
  lc.setRow(0,3,B00001100);
  lc.setRow(0,4,B00001100);
  lc.setRow(0,5,B00001100);
  lc.setRow(0,6,B00001100);
  lc.setRow(0,7,B00001100);
  
  delay(waittime5);

  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00001100);
  lc.setRow(0,2,B00001100);
  lc.setRow(0,3,B00001100);
  lc.setRow(0,4,B00001100);
  lc.setRow(0,5,B00001100);
  lc.setRow(0,6,B00001100);
  lc.setRow(0,7,B00001110);
  
  delay(waittime5);

  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00001000);
  lc.setRow(0,2,B00001100);
  lc.setRow(0,3,B00001100);
  lc.setRow(0,4,B00001100);
  lc.setRow(0,5,B00001100);
  lc.setRow(0,6,B00001100);
  lc.setRow(0,7,B00001110);
  
  delay(waittime5);

  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00001100);
  lc.setRow(0,3,B00001100);
  lc.setRow(0,4,B00001100);
  lc.setRow(0,5,B00001100);
  lc.setRow(0,6,B00001100);
  lc.setRow(0,7,B00001111);
  
  delay(waittime5);

  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00001000);
  lc.setRow(0,3,B00001100);
  lc.setRow(0,4,B00001100);
  lc.setRow(0,5,B00001100);
  lc.setRow(0,6,B00001110);
  lc.setRow(0,7,B00001111);
  
  delay(waittime5);

  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00001100);
  lc.setRow(0,4,B00001100);
  lc.setRow(0,5,B00001110);
  lc.setRow(0,6,B00001110);
  lc.setRow(0,7,B00001111);
  
  delay(waittime5);

  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00001000);
  lc.setRow(0,4,B00001100);
  lc.setRow(0,5,B00001110);
  lc.setRow(0,6,B00001110);
  lc.setRow(0,7,B00001111);
  
  delay(waittime5);

  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00001000);
  lc.setRow(0,5,B00001110);
  lc.setRow(0,6,B00001111);
  lc.setRow(0,7,B00001111);
  
  delay(waittime5);

  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000100);
  lc.setRow(0,6,B00001111);
  lc.setRow(0,7,B00001111);
  
  delay(waittime5);

  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000100);
  lc.setRow(0,6,B00001111);
  lc.setRow(0,7,B00000111);
  
  delay(waittime5);

  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000111);
  lc.setRow(0,7,B00000011);
  
  delay(waittime5);

  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000001);
  lc.setRow(0,7,B00000011);
  
  delay(waittime5);

  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000001);
  
  delay(waittime5);
}







void fillup() {
  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00000000);
  lc.setRow(0,4,B00000000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime6);

  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00001000);
  lc.setRow(0,4,B00001000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime6);

  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00000000);
  lc.setRow(0,3,B00011000);
  lc.setRow(0,4,B00011000);
  lc.setRow(0,5,B00000000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime6);

  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00001000);
  lc.setRow(0,3,B00011000);
  lc.setRow(0,4,B00011000);
  lc.setRow(0,5,B00001000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime6);

  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00000000);
  lc.setRow(0,2,B00011000);
  lc.setRow(0,3,B00011000);
  lc.setRow(0,4,B00011000);
  lc.setRow(0,5,B00011000);
  lc.setRow(0,6,B00000000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime6);

  lc.setRow(0,0,B00000000);
  lc.setRow(0,1,B00001000);
  lc.setRow(0,2,B00011000);
  lc.setRow(0,3,B00011000);
  lc.setRow(0,4,B00011000);
  lc.setRow(0,5,B00011000);
  lc.setRow(0,6,B00001000);
  lc.setRow(0,7,B00000000);
  
  delay(waittime6);

  lc.setRow(0,0,B00001000);
  lc.setRow(0,1,B00011000);
  lc.setRow(0,2,B00011000);
  lc.setRow(0,3,B00111000);
  lc.setRow(0,4,B00111000);
  lc.setRow(0,5,B00011000);
  lc.setRow(0,6,B00011000);
  lc.setRow(0,7,B00001000);
  
  delay(waittime6);

  lc.setRow(0,0,B00011000);
  lc.setRow(0,1,B00011000);
  lc.setRow(0,2,B00011000);
  lc.setRow(0,3,B00111000);
  lc.setRow(0,4,B00111000);
  lc.setRow(0,5,B00011000);
  lc.setRow(0,6,B00011000);
  lc.setRow(0,7,B00011000);
  
  delay(waittime6);

  lc.setRow(0,0,B00011000);
  lc.setRow(0,1,B00011000);
  lc.setRow(0,2,B00111000);
  lc.setRow(0,3,B00111100);
  lc.setRow(0,4,B00111100);
  lc.setRow(0,5,B00111000);
  lc.setRow(0,6,B00011000);
  lc.setRow(0,7,B00011000);
  
  delay(waittime6);

  lc.setRow(0,0,B00011000);
  lc.setRow(0,1,B00011000);
  lc.setRow(0,2,B00111100);
  lc.setRow(0,3,B01111100);
  lc.setRow(0,4,B01111100);
  lc.setRow(0,5,B00111100);
  lc.setRow(0,6,B00011000);
  lc.setRow(0,7,B00011000);
  
  delay(waittime6);

  lc.setRow(0,0,B00011000);
  lc.setRow(0,1,B00111100);
  lc.setRow(0,2,B00111100);
  lc.setRow(0,3,B01111100);
  lc.setRow(0,4,B01111100);
  lc.setRow(0,5,B00111100);
  lc.setRow(0,6,B00111100);
  lc.setRow(0,7,B00011000);
  
  delay(waittime6);

  lc.setRow(0,0,B00011000);
  lc.setRow(0,1,B00111100);
  lc.setRow(0,2,B00111100);
  lc.setRow(0,3,B01111110);
  lc.setRow(0,4,B01111110);
  lc.setRow(0,5,B00111100);
  lc.setRow(0,6,B00111100);
  lc.setRow(0,7,B00011000);
  
  delay(waittime6);

  lc.setRow(0,0,B00111100);
  lc.setRow(0,1,B00111100);
  lc.setRow(0,2,B00111100);
  lc.setRow(0,3,B11111111);
  lc.setRow(0,4,B11111111);
  lc.setRow(0,5,B00111100);
  lc.setRow(0,6,B00111100);
  lc.setRow(0,7,B00111100);
  
  delay(waittime6);

  lc.setRow(0,0,B00111100);
  lc.setRow(0,1,B01111110);
  lc.setRow(0,2,B01111110);
  lc.setRow(0,3,B11111111);
  lc.setRow(0,4,B11111111);
  lc.setRow(0,5,B01111110);
  lc.setRow(0,6,B01111110);
  lc.setRow(0,7,B00111100);
  
  delay(waittime6);

  lc.setRow(0,0,B01111110);
  lc.setRow(0,1,B11111111);
  lc.setRow(0,2,B11111111);
  lc.setRow(0,3,B11111111);
  lc.setRow(0,4,B11111111);
  lc.setRow(0,5,B11111111);
  lc.setRow(0,6,B11111111);
  lc.setRow(0,7,B01111110);
  
  delay(waittime6);

  lc.setRow(0,0,B11111111);
  lc.setRow(0,1,B11111111);
  lc.setRow(0,2,B11111111);
  lc.setRow(0,3,B11111111);
  lc.setRow(0,4,B11111111);
  lc.setRow(0,5,B11111111);
  lc.setRow(0,6,B11111111);
  lc.setRow(0,7,B11111111);
  
  delay(waittime6);
}


void loop() {
  int selection = random(1, 3);
  delay(250);
  if(selection == 1) {
  lineH();
  lineI();
  lineI();
  lineJ();
  delay(waittime2 * 4);
  lineA();
  lineB();
  delay(waittime2);
  lineC();
  lineD();
  delay(waittime2);
  lineB();
  lineA();
  delay(waittime2);
  lineD();
  lineC();
  delay(waittime2);
  lineE();
  lineF();
  delay(waittime2 * 8);
  lineG();
  delay(waittime2 * 4);
  
  } else if(selection == 2) {
  lineE();
  delay(waittime2);
  lineB();
  lineB();
  delay(waittime2);
  lineA();
  lineA();
  lineI();
  lineI();
  delay(waittime2);
  lineJ();
  lineA();
  delay(waittime2);
  
  } else if(selection == 3) {
  fillup();
  delay(waittime2 * 5);
  lineG();
  delay(waittime2);
  lineC();
  delay(waittime2);
  lineD();
  delay(waittime2);
  lineA();
  delay(waittime2);
  lineB();
  lineI();
  lineI();
  lineJ();
  }
}
