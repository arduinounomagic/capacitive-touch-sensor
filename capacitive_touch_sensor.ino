const int Touch_pin=2;

void setup()
{
  Serial.begin(9600);
  pinMode(Touch_pin, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  
}

void loop() {
int state=digitalRead(Touch_pin);
digitalWrite(LED_BUILTIN,state);
Serial.print("state of builtin LED is:");
Serial.println(state);
delay(1000);

}
