void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int soil= analogRead(A0);
  Serial.print("the soil moisture is");
  Serial.println(soil);
 float  soilper = 100-(1023-soil)/1023 *100;// if we do not sub by 100 then the percentgage obtained is opposite bcz moisture at 1023 is 0.
 Serial.print("the percentage of soil is");
 Serial.println(soilper);
  delay(100); // ina sensor we give a short time delay because if we give a larger time delay the change in the soil misture will not nbe detected for  particular period of time for a sudden chnge in the environment
}// if value comes out to be 1023 the moisture is zero an if value is 0 the moisture is 100%

