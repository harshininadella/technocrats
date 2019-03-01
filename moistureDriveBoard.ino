 int motorPin1=7;
 int motorPin2=8;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int SensorValue = analogRead(A0);
  
  delay(100);
   if (SensorValue > 600)
  {
    Serial.println(SensorValue);
    Serial.println("Motor ON");
    digitalWrite(motorPin1,LOW);
    digitalWrite(motorPin2,HIGH);
     
  }
  else
  {
    Serial.println(SensorValue);
    Serial.println("Motor OFF");
    digitalWrite(motorPin1,HIGH);
    digitalWrite(motorPin2,LOW);
  }
  delay(1000);
}
