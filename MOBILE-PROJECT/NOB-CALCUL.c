#include<stdio.h>

int main()
{
    float  R , M , A , S , MU , D ;
    
    printf("ENTREZ LE PREMIER NOMBRE : ");
    scanf("%f",&R);
    
    printf("ENTREZ LE DEUXIÈME NOMBRE : ");
    scanf("%f",&M);
    
    A = R + M ; 
    S = R - M ;
    D = R / M ;
    MU = R * M ;
    
    printf("LA SOMME DE R ET M EST : %2.f\n\n",A);
    printf("LE DIFFÉRENTS DE R ET M EST : %2.f\n\n",S);
    printf("LA MULTIPLICATION DE R ET M EST : %2.f\n\n",MU);
    printf("LE RESTE DE LA DIVISION ENTRE R ET M EST : %2.f",D);
    
    return 0;
}