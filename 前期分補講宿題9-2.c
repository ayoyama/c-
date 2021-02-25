#include <stdio.h>
int main (void)
{
char str[4][32];
int i;
for (i=0;i<4;i++){
printf("%d", i+1);
scanf("%s",&str[i]);
}
printf("番号を入力してください:¥n");
scanf("%d",&i);
printf("%s¥n",str[i-1]);

return 0;
}
