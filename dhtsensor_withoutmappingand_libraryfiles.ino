void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int d = analogRead(A0);// here d is the ADC value so to convert in voltages
  int s=(d*5)/1023;// by applying unitary method we get value in volts
  float t= (s-500)/10;// this to obtain value oftemp from voltage
  Serial.print("temperature is");
  Serial.println(t);
  delay(2000); 
 //conversion of temp to humidity is not yet found by me
  
  
  
  
  

}
