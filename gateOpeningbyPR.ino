void setup() {
  // put your setup code here, to run once:

pinMode(A0,INPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int d = analogRead(A0);
  Serial.print("the value given by the sensor is");
  Serial.println(A0);
  delay(1000);
  int s= map(ADC,0,1023,10,0);
  Serial.print("the distANCE at which the ob is placed is ");
  Serial.println(s);
  delay(1000);
  if(0<s<=1)
  {
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
   delay(1000);
  }
  else
  {
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    delay(1000);
  }
  
}
