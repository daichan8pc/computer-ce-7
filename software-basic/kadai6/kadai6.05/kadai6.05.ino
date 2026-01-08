void setup()
{
    int ad;
    Serial.begin(9600);

    for(;;)
    {
        ad=analogRead(0);

        Serial.print("AD=");
        Serial.println(ad,DEC);

        delay(500);
    }
}

void loop()
{
    
}