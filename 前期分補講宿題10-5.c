#include <stdio.h>
int main (void)
{
    int s, t;
    double v1, v2;
    printf("陸上競技の100m競走のタイムを入力してください.¥n");
    scanf("%d", &t);
    printf("%ds¥n",t);
    v1 = 100/t;
    v2 = 100/t*3.6;
    printf("平均速度は%0.1fm/s¥n",v1);
    printf("平均速度は%0.1fkm/h¥n",v2);
    return 0;


}