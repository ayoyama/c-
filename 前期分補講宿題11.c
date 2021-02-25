#include <stdio.h>
int main (void)
{
int a;
printf("整数入力してください。¥n");
scanf("%d", &a);
if(a%2 != 0){
printf("奇数です。¥n");
}
	else{
printf("偶数です。¥n");
}
return 0;
}


