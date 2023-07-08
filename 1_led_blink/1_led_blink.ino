// This sketch blinks the onboard LED (pin 13) at a time interval of one second.

int ledPin = 13;  // define variable for onboard LED

void setup() {
  pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH);  // turn onboard LED on
  delay(1000);  // wait 1s
  digitalWrite(ledPin, LOW);  // turn onboard LED off
  delay(1000); // wait 1s
}
