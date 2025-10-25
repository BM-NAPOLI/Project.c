#include<stdio.h>

int main()
{
    int N , I , U , UI ;
    
    printf("ENTREZ LA VALEUR DE N : ");
    scanf("%d",&N);
    
    UI = 6 ;
    for ( I = 1 ; I <= N ; I ++ ) {
    U = UI * 4 + 10 ; 
    UI = U ;
    }
    printf(" U%d = %d ",N , U);
    return 0;
}