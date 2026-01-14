void setup()
{
    /* モータードライバのピン番号設定 */
    int rightMortorIN1Pin = 5; // 右モータドライバのIN1ピン
    int rightMortorIN2Pin = 6; // 右モータドライバのIN2ピン
    int leftMortorIN1Pin = 7;  // 左モータドライバのIN1ピン
    int leftMortorIN2Pin = 8;  // 左モータドライバのIN2ピン

    /* モータードライバのピン設定 */
    pinMode(rightMortorIN1Pin, OUTPUT); // 右モータドライバのIN1ピン
    pinMode(rightMortorIN2Pin, OUTPUT); // 右モータドライバのIN2ピン
    pinMode(leftMortorIN1Pin, OUTPUT);  // 左モータドライバのIN1ピン
    pinMode(leftMortorIN2Pin, OUTPUT);  // 左モータドライバのIN2ピン
}

void loop()
{
    /* 右正転、左逆転 */
    digitalWrite(rightMortorIN1Pin, HIGH);
    digitalWrite(rightMortorIN2Pin, LOW);
    digitalWrite(leftMortorIN1Pin, LOW);
    digitalWrite(leftMortorIN2Pin, HIGH);
    delay(1000); // 1秒待機
    /* 右逆転、左正転 */
    digitalWrite(rightMortorIN1Pin, LOW);
    digitalWrite(rightMortorIN2Pin, HIGH);
    digitalWrite(leftMortorIN1Pin, HIGH);
    digitalWrite(leftMortorIN2Pin, LOW);
    delay(1000); // 1秒待機
}