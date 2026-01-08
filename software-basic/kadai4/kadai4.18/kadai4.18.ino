#define pi 3.14
float a,c=0;

void setup()
{
    Serial.begin(9600);

    for(;;)
    {                               //無限ループ処理ここから
        a=cos(c*pi/180);            //cosの計算、角度を60分法から弧度法に変換
        Serial.print("cos(");
        Serial.print(c,DEC);
        Serial.print(")=");
        Serial.println(a,DEC);
        c=c+1;                      //インクリメント（詳細は次回以降に説明）
        delay(500);
    }                               //無限ループ処理ここまで
}

void loop()
{
    
}