void setup()
{
    float pi,r,h,V;

    Serial.begin(9600);

    r=13.2;
    h=32.5;
    pi=3.14;
    V=pi*r*r*h/3;

    Serial.print("V=");
    Serial.println(V,DEC);
}

void loop()
{
    
}