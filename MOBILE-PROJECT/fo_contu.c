#include<stdio.h>

int main()
{
    int S , I , N ;
    S = 0 ;
    for ( I = 1 ; I <= 8 ; I ++ ){
        printf("entrez le N%d :  ",I);
        scanf("%d",&N);
    if ( N < 0 )
    continue ;
    S = S + N ;
    }
    printf("la somme est : %d",S);
    
    return 0;
}