#include <stdio.h>
int main() {
    int quantite;
    float prix_unitaire,TVA,prix,prix_total_ttc  ;
    printf("Entrez la quantite : ");
    scanf("%d", &quantite);
    printf("Entrez le prix unitaire : ");
    scanf("%f", &prix_unitaire);
    prix= quantite * prix_unitaire;
    TVA = prix* 0.20;
    prix_total_ttc = prix + TVA;
    printf("Le prix total TTC est de %f euros\n", prix_total_ttc);
    return 0;
}
