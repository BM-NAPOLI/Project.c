
#include <stdio.h>      // printf, scanf, fopen, fclose ...
#include <stdlib.h>     // malloc, free, atoi, system ...
//#include <string.h>     // strlen, strcpy, strcmp ...
#include <math.h>       // sin, cos, pow, sqrt ...
//#include <ctype.h>      // isalpha, isdigit, tolower ...
#include <stdbool.h>    // تعريف bool، true، false


int main()
{
    int AG  ;
    char SEX ;
    printf("                          👑 I M P O S A B L E  🎀 N O N    I M P O S A B L E 👑\n\n\n\n");
    printf("_ Entrez vos sex : [ M / F ] ➡️ ");
    scanf(" %c",&SEX);
    printf("_ Entrez vos âges : ➡️ ");
    scanf("%d",&AG);
    bool CA , CB ;    
    CA = ( SEX == 'M' && AG >= 20 ) ;
    CB = ( SEX == 'F' && AG >= 18 && AG <= 35) ;
    if ( CA || CB )
    printf("✅ IMPOSABLE ✅ ");
    else
    printf(" ❎ NON IMPOSABLE ❎");
   // if (  ||
 //   
//    
 //   
    
    return 0;
}