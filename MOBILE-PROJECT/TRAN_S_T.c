#include<stdio.h>

int main()
{
   int H , M , S , R , T ; 
   
   
   printf("entrez le temps en sogondse : ");
   scanf("%d",&T);
   
   H = T / 3600 ;
   R = T % 3600 ;
   M = R / 60 ;
   S = R % 60 ;
   
   printf("le temps est : %dH / %dM / %dS :",H,M,S);
   
   
   return 0;
}