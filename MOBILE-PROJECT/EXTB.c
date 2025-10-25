#include<stdio.h>

int main()
{
    float T [ 8 ] , M , S ; 
    int I ;
    
    for ( I = 0 ; I < 8 ; I ++ ) {
        printf("_ Entrez la note d'eleve numéro %d : ",I + 1 );
        scanf("%f",&T[  I ] );
    }    
    
    S = 0 ;
    
    for ( I = 0 ; I < 8 ; I ++ ) {
        S = S + T [ I ] ;
    }
    
    M = S / 8 ; 
    
    printf("\n La moyenne des notes est : %.2f",M );
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}