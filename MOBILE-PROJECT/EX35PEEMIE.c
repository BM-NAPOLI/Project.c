#include<stdio.h>

int main()
{
    int  N , I , EP ;
    printf("entrez un nombre : ");
    scanf("%d",&N);
    EP = 1  ;
    for ( I = 1 + 1 ; I <= N / 2 ; I ++) {
        if ( N % I == 0 ) {
            EP = 0 ;
        break ;
        
        }
    }
    
    if ( EP == 1 ){
        printf("N EST PREMIÈR ✓ ");
    
    }
    
    else 
        printf("N EST NON PREMIÈR × ");    
    return 0;
}