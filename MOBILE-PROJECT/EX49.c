#include<stdio.h>

int main()
{
    int T [10] ;
    int I ;
    
    for ( I = 0 ; I <= 9 ; I ++ ) 
        T [I] = 0 ; 
    for ( I = 0 ; I < 10 ; I ++ ) 
         printf("\n     T [ %d ] = %d \n",I + 1 , T [I]);  
          
    return 0;
}