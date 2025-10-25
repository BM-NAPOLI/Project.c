#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    float A , B , C , M ;
    printf("             0️⃣ T H E     B E S T     P R O G R A M E R     I S      @ B M _ _ N A P O L I 👅\n\n ");
    printf("   👉 P R O G R A M   Q U I   Q U A L C U L E    L A   M O Y E N   E S T   L A   M O N S S I O N 👈 \n\n\n");
    printf("                     👑_ entrez la première note : ➡️   ");
    scanf("%f",&A);
    printf("\n");
    printf("                     👑_ entrez la deuxième note : ➡️   ");
    scanf("%f",&B);
    printf("\n");
    printf("                     👑_ entrez la troisième note : ➡️   ");
    scanf("%f",&C);
    printf("\n");
    M = ( A + B + C ) / 3 ;
    printf("                     🌟_ la moyenne est : %.2f\n",M);
    printf("\n\n\n\n");
    if ( M < 10 )
    printf("🎀_ la montion de l'étudiant est :😩 INSUFFISANT 😩 ");
    else if ( M <= 10 && M < 12  )
    printf("🎀_ la montion de l'étudiant est :😬 PASSABLE 😬 ");
    else if ( M >=12 && M < 14 )
    printf("🎀_ la montion de l'étudiant est : 🤩 ASSEZ BIEN 🤩 ");
    else if ( M >= 14 && M < 16 )
    printf("🎀_ la montion de l'étudiant est :😎 BIEN 😎");
    else if ( M >= 16)
    printf("🎀_ la montion de l'étudiant est : 🤓 TRÈS BIEN 🤓 ");
    
    
   
   return 0;
}