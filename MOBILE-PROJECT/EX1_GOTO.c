#include<stdio.h>

int main()
{
    int  N ;
    debut : 
    printf("entrez un nombre entre 1 est 5 : ");
    scanf("%d",&N);
    if ( N < 1 || N > 5 )
    goto debut ;
    printf("BRAVO T'A ENTRÉ UN NOMBRE QUI ENTRE 1 EST 5 : ");
    
    return 0;
}