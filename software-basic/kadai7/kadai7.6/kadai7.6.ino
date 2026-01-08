void setup()
{
    Serial.begin(9600);

    int i;
    char c[8]="Arduino";

    for(i=0;i<7;i++)
    {
        Serial.print(c[i]);
    }
}

void loop()
{

}