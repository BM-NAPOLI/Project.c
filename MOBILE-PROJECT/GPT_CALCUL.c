#include <stdio.h>
#include <string.h>

void afficherChiffre(char c) {
    // كل رقم مرسوم داخل صندوق
    if (c == '0') {
        printf("╔════════╗\n");
        printf("║  ████  ║\n");
        printf("║ ██  ██ ║\n");
        printf("║ ██  ██ ║\n");
        printf("║ ██  ██ ║\n");
        printf("║  ████  ║\n");
        printf("╚════════╝\n");
    } else if (c == '1') {
        printf("╔════════╗\n");
        printf("║   ██   ║\n");
        printf("║  ███   ║\n");
        printf("║   ██   ║\n");
        printf("║   ██   ║\n");
        printf("║ ██████ ║\n");
        printf("╚════════╝\n");
    } else if (c == '2') {
        printf("╔════════╗\n");
        printf("║ █████  ║\n");
        printf("║     ██ ║\n");
        printf("║  ████  ║\n");
        printf("║ ██     ║\n");
        printf("║ ██████ ║\n");
        printf("╚════════╝\n");
    } else if (c == '3') {
        printf("╔════════╗\n");
        printf("║ █████  ║\n");
        printf("║     ██ ║\n");
        printf("║  ████  ║\n");
        printf("║     ██ ║\n");
        printf("║ █████  ║\n");
        printf("╚════════╝\n");
    } else if (c == '4') {
        printf("╔════════╗\n");
        printf("║ ██  ██ ║\n");
        printf("║ ██  ██ ║\n");
        printf("║ ██████ ║\n");
        printf("║     ██ ║\n");
        printf("║     ██ ║\n");
        printf("╚════════╝\n");
    } else if (c == '5') {
        printf("╔════════╗\n");
        printf("║ ██████ ║\n");
        printf("║ ██     ║\n");
        printf("║ █████  ║\n");
        printf("║     ██ ║\n");
        printf("║ █████  ║\n");
        printf("╚════════╝\n");
    } else if (c == '6') {
        printf("╔════════╗\n");
        printf("║  ████  ║\n");
        printf("║ ██     ║\n");
        printf("║ █████  ║\n");
        printf("║ ██  ██ ║\n");
        printf("║  ████  ║\n");
        printf("╚════════╝\n");
    } else if (c == '7') {
        printf("╔════════╗\n");
        printf("║ ██████ ║\n");
        printf("║    ██  ║\n");
        printf("║   ██   ║\n");
        printf("║  ██    ║\n");
        printf("║ ██     ║\n");
        printf("╚════════╝\n");
    } else if (c == '8') {
        printf("╔════════╗\n");
        printf("║  ████  ║\n");
        printf("║ ██  ██ ║\n");
        printf("║  ████  ║\n");
        printf("║ ██  ██ ║\n");
        printf("║  ████  ║\n");
        printf("╚════════╝\n");
    } else if (c == '9') {
        printf("╔════════╗\n");
        printf("║  ████  ║\n");
        printf("║ ██  ██ ║\n");
        printf("║  █████ ║\n");
        printf("║     ██ ║\n");
        printf("║  ████  ║\n");
        printf("╚════════╝\n");
    } else if (c == '.') {
        printf("╔════════╗\n");
        printf("║        ║\n");
        printf("║        ║\n");
        printf("║        ║\n");
        printf("║        ║\n");
        printf("║   ██   ║\n");
        printf("╚════════╝\n");
    }
}

int main() {
    float A, B, result;
    char S;

    printf("entrez le premier nombre : ");
    scanf("%f", &A);

    printf("entrez le signe : ");
    scanf(" %c", &S);

    printf("entrez le deuxième nombre : ");
    scanf("%f", &B);

    switch (S) {
        case '+': result = A + B; break;
        case '-': result = A - B; break;
        case '*': result = A * B; break;
        case '/':
            if (B != 0)
                result = A / B;
            else {
                printf("×× ERROR : division par zéro ××\n");
                return 0;
            }
            break;
        default:
            printf("le signe n'est pas convenable : >∆<\n");
            return 0;
    }

    printf("\nRésultat : %.2f %c %.2f = %.2f\n\n", A, S, B, result);

    // نحول النتيجة إلى سلسلة
    char resultatStr[20];
    sprintf(resultatStr, "%.2f", result);

    // نطبع كل رقم/رمز في صندوق
    for (int i = 0; i < strlen(resultatStr); i++) {
        afficherChiffre(resultatStr[i]);
    }

    return 0;
}