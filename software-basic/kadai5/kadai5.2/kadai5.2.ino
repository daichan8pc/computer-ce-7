void setup()
{
    int a,b,c;

    Serial.begin(9600);
    
    a=92;
    b=101;

    c=a|b;

    Serial.println(a,BIN);
    Serial.println("|");
    Serial.println(b,BIN);
    Serial.println("=");
    Serial.println(c,BIN);
}
void loop()
{

}