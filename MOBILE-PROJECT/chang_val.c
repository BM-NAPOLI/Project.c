#include<stdio.h>

int main()
{
    int A , B , C ;
    
    printf("entrez le premier nombre : ");
    scanf("%d",&A);
    
   printf("entrez le deuxième nombre : ");
   scanf("%d",&B);
   
   C = B ; 
   B = A ;
   A = C ;
   
   printf("le premier nombre est : %d\n",A);
   printf("le deuxième nombre est : %d",B);
    return 0;
}

#