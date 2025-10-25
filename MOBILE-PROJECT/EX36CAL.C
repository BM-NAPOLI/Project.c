#include<stdio.h>

int main()
{
    float A , B ;
    int S ;
    char RP ;
    
    do { 
    
        printf("               👑 CALCULATRICE PRO 👑  \n");
        
        printf("             _________________________\n");
        printf("            |1 • ADISSION '+'         |\n");
        printf("            |2 • SOUSTRACTION '-'     |\n");
        printf("            |3 • MULTIPLICATION '*'.  |\n");
        printf("            |4 • DIVISION '/'         |\n");
        printf("            |5 • RESTE DU DIVISION '/'|\n");
        printf("            |6 • PUISSANCE 'pow()'    |\n");
        printf("            |_________________________|\n");
        
        printf("\n\nQU'ELLE OPÉRATION VEUX TU ? :");
        scanf("%d",&S);
        printf("ENTREZ LE PREMIER NOMBRE :  ");
        scanf("%f",&A);
        printf("ENTREZ LE DEUXIÈME NOMBRE :  ");
        scanf("%f",&B);
        
        switch ( S ) {
            case 1 : 
                printf("LE RÉSULTAT DE %.2f + %.2f = %.2f ", A , B , A + B );
            break ;    
            
            case 2 : 
                printf("LE RÉSULTAT DE %.2f - %.2f = %.2f ", A , B , A - B );
            break ;
            
            case 3 : 
                printf("LE RÉSULTAT DE %.2f * %.2f = %.2f ", A , B , A * B );
            break ;
                
            case 4 : 
              if ( B != 0 )
                printf("LE RÉSULTAT DE %.2f / %.2f = %.2f ", A , B , A / B ); 
              else 
                printf("LA DIVISION SUR ZERO EST IMPOSSIBLE "); 
            break ;
                
            case 5 : 
                printf("LE RESTE DE LA DIVISION ENTRE %.2f ET  %.2f EST : %.2f ", A , B , (int)A % (int)B );
            break ;
                
            case 6: 
                printf("LE RÉSULTAT DE %.2f + %.2f = %.2f ", A , B , pow ( A , B ) );
            break ;
                
        default :
                printf("T'AS ENTREZ UN NOMBRE DIFIRANT DE LES 6 NOMBRES EN HAUT ");
            break ;        
        }
        
        printf("\n\n\n                      VEUX TU FAIRE UN AUTRE CALCUL ? ( O / N ) ? ");
        scanf(" %c",&RP);
        
    } while ( RP != 'N') ;    
    
    return 0;
}