#include <stdio.h>
int main (void)
{
    int s, m, h;
    printf("30000以下の秒数を入力してください.¥n");
    scanf("%d", &s);
    printf("%d秒は", s);
    h = s/3600;
    m = s/60;
    s = s%3600;
    s = s%60;
    printf("%d時間%d分%d秒です。¥n¥n", h, m, s);
    return 0;
    
}