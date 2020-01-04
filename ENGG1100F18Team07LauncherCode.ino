void setup() {
  // initialize digital pins 5,6,7 as outputs.
  //5 - Pink - IN1
  //6 - Yellow -IN2
  //7 - Blue - Enable
pinMode (5, OUTPUT);
pinMode (6, OUTPUT);
pinMode (7, OUTPUT);
}

void loop() {

  digitalWrite(5, HIGH); //Motor ON Output
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(4600);         
  digitalWrite(7, LOW);  //Motor OFF Output  
  delay(2000);
 
}
