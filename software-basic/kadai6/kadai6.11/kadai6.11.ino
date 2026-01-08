void setup()
{
    int ad;
    char c;
    Serial.begin(9600);

    for(;;)
    {
        Serial.println("Input -->");

        ad=analogRead(0);
        while (Serial.available() == 0);
        c=Serial.read();
    }
}