void setup()
{
    Serial.begin(9600);

    int i = 1;

    while (i <= 10)
    {
        Serial.println("Hello World");
        i++;
    }
}
void loop()
{
}