void setup()
{
    float a,b,h,s;

    Serial.begin(9600);

    a=12;           //上底
    b=15;           //下底
    h=8;            //高さ
    s=(a+b)*h/2;    //面積S=(上底+下底)×高さ÷2

    Serial.println(s,DEC);
}

void loop()
{

}