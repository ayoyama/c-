#include<stdio.h>
int main (void)
{
    int i=1;
    int s= 0;
    while (i<=100)
{

    s = s+i;
    i++;
    
}
printf("１から100までの和は%d¥n", s);

return 0;
}

