void setup()
{
    Serial.begin(9600);
    int i,add=1;

    for(i=2;i<=10;i++)
    {
        Serial.print(add);
        Serial.print("+");
        Serial.print(i);
        Serial.print("=");
        add=add+i;
        Serial.println(add);
    }
}
void loop()
{
    
}