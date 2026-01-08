void setup()
{
    int a,b,c;

    Serial.begin(9600);

    a=5;
    b=a<<14;

    Serial.println(a,BIN);
    Serial.println(a,DEC);
    Serial.println(b,BIN);
    Serial.println(b,DEC);

}

void loop()
{

}
