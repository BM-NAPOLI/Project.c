#include<stdio.h>

int main()
{
    int N ;
    float S , I ;
    
    printf("entrez un nombre :");
    scanf("%d",&N);
    
    S = 0 ;
    for ( I = 1 ; I <= N ; I ++) 
        S = S + ( 1 / I ) ;
    printf("la somme est : %.2f ",S);    
    
    
    
    
    
    
    
    
        
        
    
    
    
    
    return 0;
}