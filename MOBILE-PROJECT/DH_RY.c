#include <stdio.h>

int main()
{
    int ch;
    float dh, ry, x;

    printf("                                🎀  @ B M  _ _  N A P O L I  🎀\n\n");
    printf("                        🌟  C H O I S I S  L E  T Y P E  D'É C H A N G E  🌟\n\n");
    printf("                              👑 1 👑 D I R A M  ➡️  R Y A L E\n");
    printf("                              👑 2 👑 R Y A L E  ➡️  D I R A M\n\n");

    printf("➡️  ENTREZ VOTRE CHOIX (1 ou 2): ");
    scanf("%d", &ch);

    if (ch == 1) {
        printf("\n💵 ENTREZ LE MONTANT EN DIRAM: ");
        scanf("%f", &dh);
        x = dh * 20;
        printf("\n✅ %.2f DH = %.0f RY\n", dh, x);
    }
    else if (ch == 2) {
        printf("\n💰 ENTREZ LE MONTANT EN RYAL: ");
        scanf("%f", &ry);
        x = ry / 20;
        printf("\n✅ %.0f RY = %.2f DH\n", ry, x);
    }
    else {
        printf("\n❌ E R R 😭 R ❌  — CHOIX INVALIDE !\n");
    }

    return 0;
}