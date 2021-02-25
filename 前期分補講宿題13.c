#include <stdio.h>
int main(void)
{
    int n;
    printf("整数を入力してください!￥n");
    scanf("%d",&n);

    if(100<=n)
    printf("100以上です。￥n");
    
    else 
    if(10<=n&&n<100)
    printf("10以上です。 ￥n");


    else
    printf("10より小さいです。￥n");
    
     return 0;

}