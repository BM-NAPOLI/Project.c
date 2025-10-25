#include<stdio.h>

int main()
{
    int nb;
    
    printf("entrer un nombre ∆ \n");
    scanf("%d",&nb);
    if(nb > 0){
    printf("le nombre est positif ✓");
    }
    if(nb<0){
    printf("le nombre est negativ ×");
    }
    if(nb == 0){
    printf("le nombre est nulle •");
    }
    
    return 0;
}