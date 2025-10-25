#include<stdio.h>

int main()
{
    int L , C ;
    int I , J ; 
    
    printf("_ ENTREZ LE NOMBRE DES LIGNES : ");
    scanf("%d",&L);
    printf("_ ENTREZ LE NOMBRE DU COLONES : ");
    scanf("%d",&C);
    printf("\n");
    
    for ( I = 1 ; I <= L ; I ++ ) {
      for ( J = 1 ; J <= C ; J ++ ) {
          if ( I == 1 || J == 1 || I == L || J == C )
              printf(" * ");
          else 
              printf("   ");    
     } 
     
    printf("\n");
    
    }
    
    return 0;
}