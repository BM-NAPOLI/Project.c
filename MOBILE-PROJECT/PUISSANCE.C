#include<stdio.h>
#include<math.h>
    int main()
{
    int X , Y ;
    float P ;
    
    
    printf("entrez la valeur de X : ");
    scanf("%d",&X);
    
    printf("entrez la valeur de Y : ");
    scanf("%d",&Y);
    
    P = pow( X , Y ) ;
    
    printf("le résultat est : %2.f",P);
    
    return 0;
    
}