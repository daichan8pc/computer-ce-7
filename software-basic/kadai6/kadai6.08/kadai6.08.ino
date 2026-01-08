void setup()
{
    float ad,V;
    Serial.begin(9600);

    for(;;)
    {
        ad=analogRead(0);
        V=ad/1024*5;

        Serial.print("V=");
        Serial.println(V,DEC);

        delay(500);
    }
}

void loop()
{
    
}
