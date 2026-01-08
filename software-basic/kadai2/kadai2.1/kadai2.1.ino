int led = 13;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(led, HIGH);
  Serial.println("ON");
  delay(1000);
  digitalWrite(led, LOW);
  Serial.println("OFF");
  delay(1000);
}
