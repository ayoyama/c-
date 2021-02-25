#include <stdio.h>
#include <string.h>
int main (void)
{
char str1[25], str2[25];
int n1, n2;
printf("文字例1は?¥n");
scanf("%s", str1);
n1 = strlen(str1);
n2 = strlen(str2);
printf("¥n%sの文字数は%dです.¥n", str1, n1);
printf("%sの文字数は%dです.¥n", str2, n2);
if (n1 > n2) 
printf("¥n%s > %s¥n", str1, str2);
else if (n1 == n2)
printf("¥n%s = %s¥n", str1, str2);
else
printf("¥n%s < %s¥n", str1, str2);
return 0;


}