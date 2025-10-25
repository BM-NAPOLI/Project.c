#include<stdio.h>

int main()
{
     int N , BM , INV = 0 ;
     
     printf("entrez un nombre :");
     scanf("%d",&N);
     
     BM = N ;
     
     do {
        
         INV = ( INV * 10 ) + ( N % 10 ) ;
          N = N / 10 ;
         
         
         
     } while ( N != 0 ) ;     
     
     printf("L'INVERSE DU NOMBRE %d EST : %d ", BM , INV );  
     
    return 0;
}