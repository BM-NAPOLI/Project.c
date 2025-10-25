#include<stdio.h>
#include<math.h>
int main()
{
    float A , B ;
    char S ;
    char N [100] ;
    printf("                              💠 E N T R E Z    V O S   N O M E S  💠 ");
    scanf(" %s",&N);
    printf("\n\n\n");
    printf("                                    👑 C A L C U L A T R I C E 👑\n\n\n\n");
    printf(" 👋 SLAM LAH 3LIK A 🔋 SII 👑 LALA🔋 👉 %s 👈\n\n\n",N);
    printf("entrez le premier nombre :(⁠╭⁠☞⁠•́⁠⍛⁠•̀⁠)⁠╭⁠☞ ➡️");
    scanf("%f",&A);
    printf("\n");
    printf("entrez le singe[ ➕🦴➖🦴✖️🦴➗ ] (⁠☞⁠ ⁠ಠ⁠_⁠ಠ⁠)⁠☞➡️");
    scanf(" %c",&S);
    printf("\n");
    printf("entrez le deuxième nombre : ☞⁠￣⁠ᴥ⁠￣⁠☞➡️");
    scanf("%f",&B);
    printf("\n");
    switch(S){
    case '+': printf("%2.f + %2.f = %2.f",A,B,A+B);
    break ;
    case'-' : printf("%2.f - %2.f = %2.f",A,B,A-B);
    break ;
    case'*' : printf("%2.f * %2.f = %2.f",A,B,A*B);
    break ;
    case '/': if (B!=0) printf("%2.f / %2.f = %2.f",A,B,A/B);
    else printf("              ❌ D I V  /  0 ❌");
    break ;
    default :printf("          🛑  S I G N E  🛑");
    printf(" \n\n\n\n\n");
    
    }
    return 0;
}

#