#include<stdio.h>
#include<string.h>
int main() {
    char phrase[100];
    printf("donner une phrase : ");
    fgets(phrase, sizeof(phrase), stdin);
    printf("vous avez entre : %s\n", phrase);
    printf("longueur de la phrase : %lu\n", strlen(phrase));
    printf("taille de la phrase : %lu\n", sizeof(phrase));
    return 0;
}
