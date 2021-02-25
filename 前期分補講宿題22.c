#include <stdio.h>
int main (void){
     char str[6] = "TOKYO";
     int i;
     printf("%s¥n", str);
     for(i = 0; i < 6; i++){
          printf("str[%d]=%x¥n", i, str[i]);
     }
     str[3] = '\0';
     printf("¥n%s¥n", str);
     for (i = 0; i < 6; i++){
          printf("str[%d]=%x¥n", i, str[i]);

     }
     return 0;

}