const int Touch_pin=2; //Connect the sensor at pin 2

void setup()
{
  Serial.begin(9600);
  pinMode(Touch_pin, INPUT); //Set sensor pin as input pin
  pinMode(LED_BUILTIN, OUTPUT); //Set builtin LED pin as output pin
  
}

void loop() {
int state=digitalRead(Touch_pin); //Read the input at touch sensor
digitalWrite(LED_BUILTIN,state); //Operate the LED according to the input
Serial.print("State of builtin LED is:");//Print the state on LED, 1 as ON OR 0 as OFF
Serial.println(state);//Print 0 OR 1 state of LED
delay(1000);//Wait for 1 second

}
