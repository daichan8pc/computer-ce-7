#define pi 3.14

void setup(){
    float d,c;

    Serial.begin(9600);

    d=10;
    c=d*pi;

    Serial.print("c=");
    Serial.println(c,DEC);
}

void loop()
{
    
}