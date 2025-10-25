#include<stdio.h>

int main()
{
    float L , l , S , P ;
    
    printf(" \n\n\n\n");
    
    printf(">>  APPLICATION QUI MESURE LA SURFAS EST LE PÉRIMÈTRE ✓  <<\n\n\n\n\n\n\n\n\n\n");
    
    
    printf("entrer la longueur du rectangle :");
    scanf("%f",&L);
    
    
    printf("entrer la largeur du rectangle :");
    scanf("%f",&l);
    
    S = L * l ;
    P = ( L + l )  * 2 ;
    
    printf("la surface de votre rectangleest : %2.f\n",S);
    
    printf("le périmètrede votre rectangle est : %2.f",P);
    
    return 0;
}