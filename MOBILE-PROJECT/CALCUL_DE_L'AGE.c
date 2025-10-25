#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//#include <stdbool.h> 

int main()
{
    int dat_nes , age,ani ;
    printf("entrer l'année ✓\n");
    scanf("%d",&ani);
    printf("entrer votre date de naissance ∆ \n");
    scanf("%d",&dat_nes);
    age = ani- dat_nes ;
    
    printf(">>> etvotre age est : %d <<<",age);
    
    return 0;
}