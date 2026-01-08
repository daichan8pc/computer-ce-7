void setup()
{
    char c;

    for (;;)
    {
        Serial.begin(9600);
        Serial.println("Input -->[x]or[y]or[z]");

        while (Serial.available()==0){}
        c=Serial.read();

        switch (c)
        {
            case 'x':Serial.println("X");
            break;
            case 'y':Serial.println("Y");
            break;
            case 'z':Serial.println("Z");
            break;
            default:Serial.println("Other");
        }
        Serial.end();
    }
}

void loop()
{
    
}