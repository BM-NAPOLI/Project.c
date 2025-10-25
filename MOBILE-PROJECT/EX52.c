#include<stdio.h>

int main()
{
    int I ; 
    float V [3] , U [3] ;
    float BM ; 
    
    printf(" Vellez entrez les valeurs des deux vecteurs : \n");
    
    for ( I = 0 ; I < 3 ; I ++ ) {
        printf(" \n U [%d] = ",I );
        scanf(" %f ",&U[I]);
        
        printf(" \n V [%d] = ",I );
        scanf(" %f ",&V[I]);
    }    
    
    BM = 1 ; 
    
    for ( I = 0 ; I < 3 ; I ++ ) {
        BM = BM + U [I] * V [I] ; 
    }     
    printf(" Le produit scolaire des deux vecteurs est : %2.f",BM );
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}