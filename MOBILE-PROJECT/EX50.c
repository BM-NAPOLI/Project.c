#include<stdio.h>

int main()
{
    char T [6] ;
    int  I ;
    
    
    T [0] = 'A' ;   
    T [1] = 'E' ;
    T [2] = 'I' ;
    T [3] = 'O' ;
    T [4] = 'U' ;
    T [5] = 'Y' ;
     
     
    printf("_ Les voyelles de la langue Français \n");  
    
    for ( I = 0 ; I < 6 ; I ++ ) 
        printf("    ✓ %c \n",T [I] );
    
    
    
    
    
    
    
    return 0;
}