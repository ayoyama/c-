#include <stdio.h>
int main (void)
{
    float Ro, i, p, r;
    scanf("%f", &Ro);
    r = 12*Ro/(12+Ro);
    i = 10/r;
    p = i*10;
    printf("r=%f¥n", r);
    printf("i=%f¥n", i);
    printf("p(w)=%f¥n", p);

    return 0;

}