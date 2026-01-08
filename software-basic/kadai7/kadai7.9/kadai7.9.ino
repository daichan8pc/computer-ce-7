void setup()
{
    Serial.begin(9600);

    int i=2; int add=1;

    do
    {
        Serial.print(i);
        Serial.print("+");
        Serial.print(add);
        Serial.print("=");

        add += 1;
        i++;

        Serial.println(add);
    }while(i<=10);
}

void loop()
{
    
}
