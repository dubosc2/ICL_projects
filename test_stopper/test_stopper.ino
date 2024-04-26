int optoSw = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(optoSw,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue1 = analogRead(A0);
  int sensorValue2 = analogRead(A7);
  float voltage1 = sensorValue1 * (5.0 / 1023.0);
  float voltage2 = sensorValue2 * (5.0 / 1023.0);
  float voltageDif = voltage2 - voltage1;
  Serial.println(voltageDif);
  delay(1);
  // if (voltageDif < 0.35) {
  //   digitalWrite(optoSw,LOW);
  //   Serial.println("0");
  // }
  // else {
  //   digitalWrite(optoSw,HIGH);
  //   Serial.println("1");
  // }
}
