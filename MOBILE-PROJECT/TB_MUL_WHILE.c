#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{


     int N , I ;
     
     printf(" _ ENTREZ UN NOMBRE DE 0 JUSQU'À 10 : ");
     scanf("%d",&N);
     while( N < 0 || N > 10 ){
     printf(" _ ENTREZ UN NOMBRE DE 0 JUSQU'À 10 : ");
     scanf("%d",&N);
     }
     I = 0 ;
     while( I <= 10 ){
     printf("\n");
     printf("                       %d × %d = % d \n\n\n\n\n", N , I ,N * I );
     I ++ ;
     }
     
     
     
     

   return 0;
}