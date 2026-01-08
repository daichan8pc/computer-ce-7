void setup()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n;

    Serial.begin(9600);

    a=1;
    b=a<<0;
    c=b<<1;
    d=c<<1;
    e=d<<1;
    f=e<<1;
    g=f<<1;
    h=g<<1;
    i=h<<1;
    j=i<<1;
    k=j<<1;
    l=k<<1;

    Serial.println(a,DEC);
    Serial.println(b,DEC);
    Serial.println(c,DEC);
    Serial.println(d,DEC);
    Serial.println(e,DEC);
    Serial.println(f,DEC);
    Serial.println(g,DEC);
    Serial.println(h,DEC);
    Serial.println(i,DEC);
    Serial.println(j,DEC);
    Serial.println(k,DEC);
    Serial.println(l,DEC);

}

void loop()
{
    
}