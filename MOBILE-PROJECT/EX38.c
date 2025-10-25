#include<stdio.h>

int main()
{
    long N ; 
    int NB = 0 , BM ;
    printf("===========================================\n");
printf("     PROGRAMME : COMPTER LES CHIFFRES      \n");
printf("===========================================\n\n");

    printf("ENTREZ UN NOMBRE : ");
    scanf("%ld",&N);
    BM = N ;
    do { 
        NB ++ ;
        N = N / 10 ;
    } while ( N != 0 ) ;
    
    
    printf("LE NOMBRE %d  SE COMPOSE DE %ld CHIFFRES ", BM , NB  );
       
    return 0;
}