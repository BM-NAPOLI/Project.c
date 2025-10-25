#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{


     int S , I , N ;
     
     
     do {
     printf(" ENTREZ UN NOMBRE : ");
     scanf("%d", &N );
     } while ( N < 1 ) ;
     
     
     S = 0 ;
     
     
     
     for ( I = 1 ; I <= N ; I ++ ) {
     S = S + I ;
     }
     printf(" LA SOMME EST :   %d     ", S );
     
     
     
     
     
     
     

   return 0;
}