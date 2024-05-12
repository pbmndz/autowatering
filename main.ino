
const int analogInputPin = A0;
const int digitalOutputPin = 9;

void setup() {

  pinMode(digitalOutputPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  int sensorValue = analogRead(analogInputPin);
  Serial.print(sensorValue);
  Serial.print(" ");
  
  if(sensorValue < 550){
      digitalWrite(digitalOutputPin, HIGH);
      Serial.println("stop");
  }
  else{
    digitalWrite(digitalOutputPin, LOW);  
    Serial.println("go");
  }
}
