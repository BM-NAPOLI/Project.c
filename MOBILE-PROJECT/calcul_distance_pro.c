#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    float XA, YA, XB, YB, AB;
     
    printf("Entrez les coordonnées de XA : ");
    scanf("%f", &XA);
    printf("Entrez les coordonnées de YA : ");
    scanf("%f", &YA);
    printf("Entrez les coordonnées de XB : ");
    scanf("%f", &XB);
    printf("Entrez les coordonnées de YB : ");
    scanf("%f", &YB);

    AB = sqrt(pow(XB - XA, 2) + pow(YB - YA, 2));
    
    printf("\n       / \\__");
    printf("\n     (    @\\___");
    printf("\n     /         O");
    printf("\n    /   (_____/");
    printf("\n   /_____/   U");

    printf("\n\nLA DISTANCE ENTRE A ET B EST : %.2f\n", AB);

    return 0;
}