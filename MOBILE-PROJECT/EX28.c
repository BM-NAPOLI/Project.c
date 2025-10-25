#include<stdio.h>
#include<math.h>

int main()
{
    int N ; 
    float F , I ;
    
  printf("entrez un nombre : ");
    scanf("%d",&N);
    F = 1 ;
    for ( I = 2 ; I <= N ; I ++ )
        F = F * I ;
       
    
  if ( N > 0 ) {
      printf("LA FACTEURIEL DE %d EST : %2.f ", N , F);
}  
    
  else if ( N == 0 ) {  
      printf("LA FACTEURIEL EST : 1 ");  
}  
        
  else      
      printf(" ❌ ENTREZ UN NOMBRE POZSITIF ❌ ");  
    
    
    
    return 0;
}