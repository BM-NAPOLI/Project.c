#include<stdio.h>

int main()
{
    int TE [6] , TS [6] , I ; 
    
    printf(" VELLEZ SAISIR LES ÉLÉMENTS DU TABLEAU : \n\n");
    
    for ( I = 0 ; I < 6 ; I ++ ) {
        printf("     👅 TE [%d] = ", I );
        scanf("     %d",& TE [I] );
    }     
    
    for ( I = 0 ; I < 6 ; I ++ )  
        TS [ 5 - I ] = TE [I] ;
    
    printf("\n\n");
    printf(" L'INVERSE DU TABLEAU : \n\n");
    
    for ( I = 0 ; I < 6 ; I ++ ) {
        printf("     👑 TS [%d] = %d\n", I , TS [I] );
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}