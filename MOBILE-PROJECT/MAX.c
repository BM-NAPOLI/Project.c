#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    float X , Y , MAX ;
     
    printf("Entrez le premier nombre : ");
    scanf("%f", &X);
    printf("Entrez le deuxieme nombre : ");
    scanf("%f", &Y);
    MAX = X ;
    if ( Y < MAX ) {
    Y = MAX ;
    }
    printf("le maximum est : %2.f", MAX );
  

    
    printf("\n       / \\__");
    printf("\n     (    @\\___");
    printf("\n     /         O");
    printf("\n    /   (_____/");
    printf("\n   /_____/   U");

    

    return 0;
}