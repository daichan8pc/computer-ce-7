void setup()
{
    int ad;
    Serial.begin(9600);
    pinMode(13,OUTPUT);

    for (;;)
    {
        ad=analogRead(0);

        Serial.print("AD=");
        Serial.println(ad,DEC);

        if(ad>500)
        {
            digitalWrite(13,HIGH);
        }
        else
        {
            digitalWrite(13,LOW);
        }

        delay(500);
    }
}

void loop()
{

}