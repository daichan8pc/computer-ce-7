void setup()
{
    Serial.begin(9600);

    int i=2;
    int add=1;

    while(i<=10)
    {
        Serial.print(i);
        Serial.print("+");
        Serial.print(add);
        Serial.print("=");

        add+=i;
        i++;

        Serial.println(add);
    }
}

void loop()
{
    
}