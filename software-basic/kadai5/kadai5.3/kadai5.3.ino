void setup()
{
    int a,b;

    Serial.begin(9600);

    a=103;

    b=~a;

    Serial.println("~");
    Serial.println(a,BIN);
    Serial.println("=");
    Serial.println(b,BIN);
    Serial.println(b,DEC);
}

void loop()
{
    
}