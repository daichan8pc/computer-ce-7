void setup()
{
    Serial.begin(9600);
    pinMode(13, OUTPUT);
    char c;

    for (;;) // 無限ループ
    {
        Serial.println("Input -->");

        while (Serial.available() == 0)
            ;
        c = Serial.read();

        if (c != 'a')
        {
            digitalWrite(13, HIGH);
            Serial.println("ON");
        }

        delay(2000);
        digitalWrite(13, LOW);
    }
}

void loop()
{
}
