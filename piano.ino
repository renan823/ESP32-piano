#include <BleKeyboard.h>

BleKeyboard keyboard;

const int DO = 13, RE = 12, MI = 14, FA = 27, SOL = 26, LA = 25, SI = 33;

void setup() {
  keyboard.begin();

  pinMode(DO, INPUT_PULLUP);
  pinMode(RE, INPUT_PULLUP);
  pinMode(MI, INPUT_PULLUP);
  pinMode(FA, INPUT_PULLUP);
  pinMode(SOL, INPUT_PULLUP);
  pinMode(LA, INPUT_PULLUP);
  pinMode(SI, INPUT_PULLUP);
}

void loop(){ 
  if (keyboard.isConnected()) {
    if (digitalRead(DO) == LOW) {
      keyboard.print('i');
    } 
    if (digitalRead(RE) == LOW) {
      keyboard.print('o');
      
    }

    if (digitalRead(MI) == LOW) {
      keyboard.print('p');
    }

    if (digitalRead(FA) == LOW) {
      keyboard.print('z');
    } 

    if (digitalRead(SOL) == LOW) {
      keyboard.print('x');
    } 

    if (digitalRead(LA) == LOW) {
      keyboard.print('c');
    } 

    if (digitalRead(SI) == LOW) {
      keyboard.print('v');
    } 

    delay(500);
  }
}
