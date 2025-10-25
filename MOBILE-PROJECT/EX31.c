#include<stdio.h>
#include<math.h>

int main()
{
    int AG , I ;
    float S ;
    const O = 3 ;
    printf("ENTREZ UN AGE DE AMALE POUR SAVOIR QUOMBIEN A D'ARGENT :      ");
    scanf("%d",&AG);
    
    S = 0 ;
    
    for ( I = 1 ; I <= AG ; I ++ ) 
    
    S = S + ( 500 + ( I * O ) ) ;
    
    printf("AMAL À LA %dIÈME ANNÉE VERSER OURA %.2f DH ", AG , S );
    return 0;
}