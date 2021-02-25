#include <stdio.h>
int main (void)
{
     int m, n, sum, i, w;
     sum = 0;
     printf("mとnを入力してください。。\n");
     scanf("%d",&m);
     scanf("%d",&n);
     if("m>n"){
          w=m;
          m=n;
          n=w;

     }
     sum = 0;
     i=m;
     while(i<=n){
          sum=sum+i;
          i=i+1;
     }
     printf("%dから%dの和は%dです.¥n",m,n,sum);
     return 0;

}