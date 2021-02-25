#include <stdio.h>
int main (void)
{
     int i, n, sum;
     while (1)
     {
          printf("正の整数を入力して下さい !¥n");
          scanf ("%d", &n);
          if (n <= 0)
          break;
          if (n >= 10000)
          {
               printf("処理できません!¥n");
               continue;
          }
          sum = 0;
          for ( i = 1; i <= n; i++ )
          {
               sum += i;
          }
          printf("１から%dまでの和は、%dです。¥n", n, sum);

          
          
     }
     return 0;

}