void setup()
{
    int photoInput = 0;
    
    pinMode(13,OUTPUT);
    pinMode(2,INPUT);

    for(;;)     // 無限ループ
    {
        photoInput = digitalRead(2);

        // if文は次回以降の演習で説明
        if (photoInput==HIGH)
        {
            digitalWrite(13,HIGH);
        }
        else
        {
            digitalWrite(13,LOW);
        }
    }           // for文の終わり
}

void loop()
{
    // 空のloop関数を追加
}