#include <stdio.h>
int main (void)
{
     int ans;
     do{
          printf("Yesなら1を, Noなら0を入力してください！¥n");
          scanf("%d",&ans);

     }while ((ans != 1) && (ans != 0));
     if(ans == 1)
     printf("入力はYesです。¥n");
     else
          printf("入力はNoです。¥n");
          return 0;
}