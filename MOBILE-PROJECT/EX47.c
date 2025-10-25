#include<stdio.h>

int main()
{
    
    int L , C , I , J ; 
    
    printf("Enrez le nombre des lignes : ");
    scanf("%d",&L);
    printf("Enrez le nombre  du colones : ");
    scanf("%d",&C);
    
    for ( I = 1 ; I <= L ; I ++ ) {
     for ( J = 1 ; J <= C ; J ++ ) {
        printf("    ");
     }
        printf("\n");
         
      for ( J = 1 ; J <= ( 2 * I - 1 ) ; J ++ ) {   
       if ( I == L || J == 1 || J == ( 2 * I - 1 ) ) {
        printf("  * ");   
       }   
       else 
        printf("    ");
      }
    }
    
    
    
    
    
    
    
    
    
    return 0;
}