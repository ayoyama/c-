#include <stdio.h>
int main (void)
{
     int i, j;
     int data[3][5]={1980, 921, 4020, 826, 0,
                     1990, 958, 5547, 2023, 0,
                     2000, 968, 6692, 3221, 0};
     double rate[3][3];
     for (i=0; i<3; i++){
          for (j=1; j<4; j++){
               data[i][4] = data[i][4] + data[i][j];
          }
     } 
     for (i = 0; i < 3; i++){
          for (j = 0; j < 3; j++){
               rate[i][j] = (double)data[i][j+1] / 
                            (double)data[i][4] * 100;
          }
     }
     printf(" 年度　水力　火力　原子力　合計（億kw.h)¥n");
     for (i = 0; i < 3; i++){
          for (j = 0; j < 5; j++){
               printf("%7d", data[i][j]);
          }
          printf("¥n");
          printf("  (%%)");
          for ( j = 0; j < 3; j++){
               printf("%7.1f", rate[i][j]);
          }
          printf("¥n");
     }
     return 0;

}