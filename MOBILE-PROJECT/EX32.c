#include<stdio.h>
#include<math.h>

int main()
{
    int nb_an ;
    float aga , kex ;
    
    aga = 500000 ;
    kex = 1000000 ;
    nb_an = 0 ;
    
    while ( kex > aga ) {
    aga += aga * 0.08 ;
    kex +=  50000 ;
    nb_an ++ ;
    }
    
    printf("  AGADIR VA DÉPASSÉ MARAKECH APRÈS %d ANNÉES .",nb_an);
    
}