#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h> 

int main()
{
    float A , B , C , D , E , S , M ; 
    
    printf("ENTREZ LA PREMIÈRE NOTRE ✓ : ");
    scanf("%f",&A);
    printf("ENTREZ LA DEUXIÈME NOTRE ✓ : ");
    scanf("%f",&B);     
    printf("ENTREZ LA TROISIÈME NOTRE ✓ : ");
    scanf("%f",&C);
    printf("ENTREZ LA QUATRIÈME NOTRE ✓ : ");   
    scanf("%f",&D);
    printf("ENTREZ LA CINQUIÈME NOTRE ✓ : ");  
    scanf("%f",&E);
    S = A + B + C + D + E ;
    M = S / 5 ;    
    
    printf("LA SOMME DE CES NOTES EST : %2.f\n",S);
    printf("LA MOYEN DE CES NOTES EST : %2.f",M);
    return 0;
}