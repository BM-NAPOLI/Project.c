#include<stdio.h>

int main()
{
    float T [10] , S ; 
    int I , M ,  X ; 
    
    printf("Vellez enttez le notes ✓\n");
    S = 0 ;
    for ( I = 0 ; I < 10 ; I ++ ){
        printf("\n T [%d] = ",I );
        scanf(" %f",&T[I] );
        S = S + T [I] ;
    }    
    M = S / 10 ;
     
    
    for ( I = 1 ; I < 10 ; I ++ ){
        if ( T [I] > M ) 
        X ++ ; 
    }    
    printf("\n\n LA MOYENNE EST %d ",M);
    printf("\n\n LES NOTS QUI DEPASSE LA MOYEN SONT : %d",X);
        
    
    return 0;
}