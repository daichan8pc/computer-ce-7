void setup()
{
    float a,b,c;

    Serial.begin(9600);

    a=8.5;
    b=18.2;
    c=sqrt(a*a+b*b);

    Serial.print("c=");
    Serial.println(c,DEC);
}

void loop()
{
    
}