void setup()
{
    float a,b;

    Serial.begin(9600);

    a=5;
    b=sqrt(a);

    Serial.print("sqrt(5)=");
    Serial.println(b,DEC);
}

void loop()
{
    
}