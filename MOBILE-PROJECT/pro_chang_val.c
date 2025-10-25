#include<stdio.h>

int main()
{
    int A , B ;
    
    printf("entrez le premier nombre : ");
    scanf("%d",&A);
    
   printf("entrez le deuxième nombre : ");
   scanf("%d",&B);
   
   A = A + B ;
   B = A - B ;
   A = A - B ;
   
   printf("le premier nombre est : %d\n",A);
   printf("le deuxième nombre est : %d",B);
   
    return 0;
}

