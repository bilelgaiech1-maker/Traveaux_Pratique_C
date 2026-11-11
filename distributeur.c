#include <stdio.h>
#include <stdbool.h>
int main() {
    int choix;
    float solde =5.0; 
    float prix;
    int sucre;
    int i;
    bool carteValide = true;
    bool soldeSuffisant;
    printf("=== DISTRIBUTEUR DE BOISSONS ===\n");
    printf("Solde disponible : %.2f EUR\n", solde);
    printf("1. Cafe (1.50 EUR)\n");
    printf("2. Thé (1.20 EUR)\n");
    printf("3. Chocolat (2.00 EUR)\n");
    printf("Choisissez votre boisson (1-3) : ");
    scanf("%d", &choix);
    switch (choix) {
        case 1:
        prix = 1.50;
        break;
        case 2:
        prix = 1.20;
        break;
        case 3:
        prix = 2.00;
        break;
        default:
        printf("Choix invalide.\n");
        return 1;
    }
// Évaluation logique du solde
    soldeSuffisant = solde >= prix;
    if (carteValide && soldeSuffisant) {
        do {
            printf("Combien de sucres voulez-vous (0 a 3) ? ");
            scanf("%d", &sucre);
        } while (sucre < 0 || sucre > 3);
        solde = solde - prix;
        printf("\nPreparation en cours...\n");
        for (i = 1; i <= sucre; i++) {
            printf("-> Ajout de la dose de sucre %d...\n", i);
        }
        printf("Votre boisson est prête ! Solde restant : %.2f EUR\n", solde);
    } else {
        printf("Transaction refusée : Solde insuffisant.\n");
    }
    printf("Nombre de doses de sucre ajoutees au total : %d\n", sucre);
    return 0;
}
