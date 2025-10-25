#include<stdio.h>
#include<math.h>

int main()
{
    int N , I ; 
    
    do { 
    
        printf("entrez un nombre : ");
        scanf("%d",&N);
        
}   while ( N <= 0 );
    
    for ( I = 1 ; I <= N ; I ++ ) {
    if ( N % I == 0 ) {
    
    
        printf("%d est un diviseur de %d \n",N , I );
}
}
    return 0;
}