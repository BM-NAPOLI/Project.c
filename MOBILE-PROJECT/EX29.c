#include<stdio.h>
#include<math.h>

int main()
{
    int N ; 
    float S , I , J ;
    const O = 2 ;
  printf("entrez un nombre : ");
    scanf("%d",&N);
   
  S = 0 ;
  J = 1 ;
  
  for ( I = 1 ; I <= N ; I ++ ) {
  
  S = S + pow ( J , O ) ;
  J = J + O ;
  
  }  
  
  printf("la somme est : %.2f ", S );  
    
    return 0;
}