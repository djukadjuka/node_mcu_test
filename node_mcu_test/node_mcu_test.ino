
/*
    Code made to test basic functionalities for node mcu board.
    Opens for bluetooth, wifi and blinks 5 times.
    Wifi will try to send email to designated email address,
    using specific email credentials if there is wifi.
    Bluetooth will be active to connect from code or other
    com source.
*/

#define LED 2

void setup() {
  // Set pin mode`
  pinMode(LED, OUTPUT);
}

void loop() {
  // This code used to test blink
  // Should blink 5 times then wait 2 seconds
  for(int i=0;  i < 5;  i++){
    delay(500);
    digitalWrite(LED, HIGH);
    delay(500);
    digitalWrite(LED,LOW);
  }
  delay(2000);
}
