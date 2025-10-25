#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int N ;
    float F ;
    printf("     👉 P R O G R A M   Q U I   Q U A L C U L E    L E   M O N T A N T   D E   F A C T E U R S   A   P A Y E R  👈\n\n\n");
   printf("                     entrez le nombre de comples :➡️ ");
   scanf("%d",&N);
   
   if ( N >= 10 ) 
   F = N * 0.30 ; 
   
   else if ( N <= 30 )
   F = 10 * 0.30 + ( N - 10 ) + 0.25 ;
   
   else
   F = 10 * 0.30 + 20 + 0.25 + ( N - 30 ) + 0.25 ;
   
   printf("                     le montant de facteurs à payer est : %2.F",F);
    
   return 0;
}