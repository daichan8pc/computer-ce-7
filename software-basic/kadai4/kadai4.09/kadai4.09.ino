void setup()
{
    float pi,r,S,V;

    Serial.begin(9600);

    pi=3.14;        //円周率π=3.14
    r=28.3;         //球の半径r=28.3mm
    S=4*pi*r*r;     //円の表面積
    V=4*pi*r*r*r/3;  //円の体積

    Serial.print("S=");
    Serial.println(S,DEC);

    Serial.print("V=");
    Serial.println(V,DEC);
}

void loop()
{
    
}