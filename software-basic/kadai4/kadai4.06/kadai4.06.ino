/* 52÷11について、商と剰余を別々に表示する例*/

void setup()
{
    int a,b,c,d;

    Serial.begin(9600);

    a=52;
    b=11;
    c=a/b;
    d=a%b;

    Serial.print(c,DEC);
    Serial.print("...");
    Serial.print(d,DEC);
}

void loop()
{
    
}