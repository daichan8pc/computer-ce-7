void setup()
{
    int photoInput, touchInput;
    /* センサのピン設定 */
    pinMode(2, INPUT); // フォトトランジスタ
    pinMode(3, INPUT); // タッチセンサ

    /* モータードライバのピン設定 */
    pinMode(5, OUTPUT); // 右モータドライバのIN1ピン
    pinMode(6, OUTPUT); // 右モータドライバのIN2ピン
    pinMode(7, OUTPUT); // 左モータドライバのIN1ピン
    pinMode(8, OUTPUT); // 左モータドライバのIN2ピン

    Serial.begin(9600);

    for (;;)
    {
        photoInput = digitalRead(2);
        touchInput = digitalRead(3);
        Serial.print("Photo: ");
        Serial.print(photoInput);
        Serial.print(" Touch: ");
        Serial.println(touchInput);
        if (photoInput == LOW && touchInput == HIGH)
        {
            Serial.println("Move motors");
            /* 右正転、左逆転 */
            digitalWrite(5, HIGH);
            digitalWrite(6, LOW);
            digitalWrite(7, LOW);
            digitalWrite(8, HIGH);
            delay(1000); // 1秒待機
            /* 右逆転、左正転 */
            digitalWrite(5, LOW);
            digitalWrite(6, HIGH);
            digitalWrite(7, HIGH);
            digitalWrite(8, LOW);
            delay(1000); // 1秒待機
        }
        else
        {
            Serial.println("Stop motors");
            /* モーターを停止 */
            digitalWrite(5, LOW);
            digitalWrite(6, LOW);
            digitalWrite(7, LOW);
            digitalWrite(8, LOW);
        }
    }
}
void loop()
{
    // ループ内は空
}