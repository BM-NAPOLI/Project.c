#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    float R, V;
    const float pi = 3.14;

    printf("Entrez le rayon : ");
    scanf("%f", &R);

    V = (4.0 * pi * pow(R, 3)) / 3.0;

    printf("Le volume est : %.2f\n", V);

    return 0;
}