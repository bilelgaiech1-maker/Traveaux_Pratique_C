#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
    bool pleut,decision,nuit;
    int heure ;
    float temperature , humidite ;
    printf("donner la temperature\n");
    scanf("%f",&temperature);
    printf("donner la humidite\n");
    scanf("%f",&humidite);
    printf("donner la pleut\n");
    scanf("%d",&pleut);
    printf("donner l'heure\n");
    scanf("%d",&heure);
    nuit=(heure>=20)||(heure<6);
    decision=(nuit==true)||(((nuit==true)&& temperature<=15)||temperature<10)||((humidite<=40)&& pleut==false)||(temperature>30 && humidite>70);
    printf("le systeme active:%d",decision);
    return 0;
}
