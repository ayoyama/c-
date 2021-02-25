#include <stdio.h>
int main (void)
{
     int i, sum;
      sum = 0;

     for (i = 0; i < 201; i=i+2)
     sum = sum + i;
     printf("200以外の偶数の和は %dです.¥n", sum);
     return 0;
}