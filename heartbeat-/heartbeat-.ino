int sec = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(sec);
  Serial.println(" sec have elapsed");
  sec++;
  delay(1000);
}
