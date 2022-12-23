const int sigPin = 7; //connects pin 7
boolean sigVal = 0; //var for reading tilt status
String disp = "It is tilted! ";

void setup() {
  pinMode(sigPin, INPUT); //declared input to  signal pin
  pinMode(LED_BUILTIN, OUTPUT); //onboard Led set to output
  digitalWrite(sigPin, HIGH);
  Serial.begin(4800);
}

void loop() {

  sigVal = digitalRead(sigPin); //reads in sigPin value into sigVal
  Serial.println(sigVal); //prints tilt status to serial window
  
  if(sigVal == HIGH) //if tilted
  {
    Serial.print(disp);
    digitalWrite(LED_BUILTIN, HIGH); //turn off led
  }
   else
   {
    
    digitalWrite(LED_BUILTIN, LOW); //else turn on led
   }
}
