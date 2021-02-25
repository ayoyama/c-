#include <stdio.h>
int main (void)
{
     int n;
     do{
          printf(" nを入力してください。¥n");
          scanf("%d",&n);
          
     }while(n<0);
     while (n--)putchar('*');
     putchar('¥n');
     return 0;

}