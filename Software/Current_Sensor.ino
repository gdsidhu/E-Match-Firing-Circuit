// The following is the code that was used to test the current sensor

int sensorPin = A0;   
int sensorValue;
float sensorVol;
void setup() {
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  sensorVol = (sensorValue / 1024.) * 5. ; 
  // stop the program for <sensorValue> milliseconds:
  Serial.print(sensorVol);
  Serial.print(" V or ");
  Serial.print(sensorVol * 1000);
  Serial.println(" mV");
  delay(250);

}
