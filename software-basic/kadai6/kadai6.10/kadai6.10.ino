void setup()
{
    int ad;
    Serial.begin(9600);

    for (;;)
    {
        ad=analogRead(0);

        if(ad>=1000)
        {
            Serial.println("Level1");
        }
        else if (ad>=500)
        {
            Serial.println("Level2");
        }
        else
        {
            Serial.println("Level3");
        }

        delay(500);
    }
}

void loop()
{

}