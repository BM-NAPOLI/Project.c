#include<stdio.h>

int main()
{
    int  N , I ;
    printf("entrez un nombre : ");
    scanf("%d",&N);
    printf(" F O R : ");
    for ( I = N + 1 ; I <= N + 10 ; I ++)
        printf("%d  ✓  ",I);
        
        
    printf("\n W H I L E : ");    
    I = N + 1 ;
    while ( I <= N + 10 ) {
        printf("%d  ✓  ",I);
        I ++ ;
    }
    
    printf("\n DO  W H I L E : ");    
    I = N + 1 ;
    do {
    printf("%d  ✓  ",I);
    I ++ ;
    } while ( I <= N + 10 ) ;
        
        
    
    
    
    
    return 0;
}