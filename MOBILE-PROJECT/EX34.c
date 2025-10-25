#include<stdio.h>

int main()
{
    
    int L ;
    int I , J ; 
    
    printf("ENTREZ LR NOMBRES DES LINGES : ");
    scanf("%d",&L);
    printf("\n");
    
    for ( I = 1 ; I <= L ; I ++ ) {
    for ( J = 1 ; J <= I ; J ++ ) {
        printf("  $  ");
    }    
        printf("\n");
    }
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}