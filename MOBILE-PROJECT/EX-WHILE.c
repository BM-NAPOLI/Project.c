#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int N, I ,S ;

    do {
    printf(" _ ENTRER UN NOMBRE QIU ETS GRAND QU'UN : ➡️ \n") ;
    scanf("%d",&N) ;
    S = 0 ;
    } while ( N <= 1 ) ;
    for ( I = 1 ; I <= N ; I ++ ) {
    S = S + I ; 
    }
    printf(" _ LA SOMME EST : ✅ %d",S);
  
    return 0 ;
}    