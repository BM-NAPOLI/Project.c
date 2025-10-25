#include<stdio.h>
#include<math.h>

int main()
{
    int N ; 
    float S , I ;
    
  printf("entrez un nombre : ");
    scanf("%d",&N);
    S = 0 ;
    for ( I = 0 ; I <= N ; I ++ )
        S = S + pow ( 10 , I ) ;
    printf("la somme est : %.2f ",S);    
    
    
    
    
    
    
        
        
    
    
    
    
    return 0;
}