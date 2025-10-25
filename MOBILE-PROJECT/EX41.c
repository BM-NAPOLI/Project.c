#include<stdio.h>

int main()
{
    
    int N , BM , INV = 0 ;
    
    printf(" ENTREZ UN NOMBRE :");
    scanf("%d",&N);
    
    BM = N ;
    
    do {
        INV = ( INV * 10 ) + ( N % 10 ) ;
        N = N / 10 ;
    } while ( N != 0 ) ;
    
    if ( INV == BM ) {
        printf("LE NOMBRE %d EST UN NOMBRE PALINDROME ",BM);
    }   
       
    else
        printf("LE NOMBRE %d EST UN NOMBRE NON PALINDROME ",BM);    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}