void setup()
{
    int ad,x;

    for(;;)
    {

        Serial.begin(9600);

        ad=analogRead(0);

        if(ad>=1000)
        {
            x=1;
        }
        else if(ad>=500)
        {
            x=2;
        }
        else
        {
            x=3;
        }

        switch(x)
        {
            case 1 :  Serial.println("Level1");     //caseと1の間にスペースを必ず入れる
            break;
            case 2 :  Serial.println("Level2");     //case 1のあとはセミコロンではなくコロン
            break;
            default :  Serial.println("Level3");
            break;    
        }
        delay(500);
    }
}
void loop()
{

}