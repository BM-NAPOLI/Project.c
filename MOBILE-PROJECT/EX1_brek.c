#include<stdio.h>

int main()
{
    int N , S , I ;
     S = 0 ;
     for(I>1;I<=8;I++){
    printf("entrez un nombre ");
    scanf("%d",&N);
    
    if(N < 0)
    break ;
    S=S+N;
    }
    printf("LA SOMME EST : %d",S);
    
    
    
    
    return 0;
    
}