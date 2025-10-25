#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    float XA , XB , YA ,YB , AB ;
    

    printf("entrez les cordonnees de XA : ");
    scanf("%f", &XA);
    printf("entrez les cordonnees de XB : ");
    scanf("%f", &XB);
    printf("entrez les cordonnees de YA : ");
    scanf("%f", &YA);
    printf("entrez les cordonnees de YA : ");
    scanf("%f", &YB);

   AB = sqrt ( pow ( XB - XA  , 2 )  + pow (  YB - YA  , 2 ) );

    printf("LA DISTANCE ENTRE A ET B : %.2f", AB);

    return 0;
}