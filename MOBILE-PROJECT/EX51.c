#include<stdio.h>

int main()
{
    
    float S , P , M , T [10] ; 
    int I ; 
    
    printf(" Vellez saisir le element du tableau : \n");
    
    for ( I = 0 ; I < 10 ; I ++ ) { 
        printf("\n  T [%d] = ",I);
        scanf("  %f",&T[I]);
    }
    
    S = 0 ; 
    P = 1 ; 
    
    for ( I = 0 ; I < 10 ; I ++ ) { 
        S = S + T [I] ;
        P = P * T [I] ;
    }    
    
    M = S / 10 ; 
    
    printf("\n\n\n       La somme est : %.2f\n",S );
    printf("\n       Le produit est : %.2f\n",P );
    printf("\n       La moyenne est : %.2f\n",M );
        
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}