void setup()
{
    pinMode(5, OUTPUT); // 右モータドライバのIN1ピン
    pinMode(6, OUTPUT); // 右モータドライバのIN2ピン
    pinMode(7, OUTPUT); // 左モータドライバのIN1ピン
    pinMode(8, OUTPUT); // 左モータドライバのIN2ピン
}

void loop()
{
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    delay(1000);
    digitalWrite(5, LOW);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    delay(1000);
}