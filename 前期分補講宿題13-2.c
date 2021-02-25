#include <stdio.h>
int main (void) {
     int a;
     scanf ("%d",&a);
     switch (a) {
          case 1: 
          printf ("月曜日です。¥n");
          break;
          case 2:
          printf ("火曜日です。¥n");
          break;
          case 3:
          printf ("水曜日です。¥n");
          break;
          case 4:
          printf("木曜日です。¥n");
          break;
          case 5:
          printf ("金曜日です。¥n");
          break;
          case 6:
          printf ("土曜日です。¥n");
          break;
          case 7:
          printf ("日曜日です。¥n");
          break;
          default:
          printf ("?????¥n");
          break;
          
     }
     return 0;
}