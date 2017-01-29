void setup() {//LED_BUILTIN
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void ledOn() {
  digitalWrite(13, HIGH);
}

void ledOff() {
  digitalWrite(13, LOW);
}

void loop() {

  if (Serial.available() > 0) {
    int value = Serial.parseInt();
    switch (value) {
      case 0: {
        ledOff();
        Serial.print("Turn Off.\n");
      } break;
      case 1: {
        ledOn();
        Serial.print("Turn On.\n");
      } break;
      default: Serial.print("Wrong value. Please send: 0-Turn Off / 1-Turn On\n");
    }
  }
  
}
