#include <stdio.h>
int main (void)
{
    int a, b, c, d;
    printf("16進数 a=?¥n");
    scanf("%d", &a);
    printf("16進数 b=?¥n");
    scanf("%d", &b);
    c = a + b;
    d = a - b;
    printf("和は, 16進数 : %x¥t10進数 : %d¥n", a,c);
   
    printf("差は, 16進数 : %x¥t10進数 : %d¥n", b,d);
    return 0;
}