#include<stdio.h>
#include<string.h>
int main() {
    char phrase[100];
    printf("donner une phrase : ");
    fgets(phrase, sizeof(phrase), stdin);
    printf("vous avez entre : %s\n", phrase);
    printf("la deriner lettre de votre phrase est : %c/n", phrase[strlen(phrase) - 2]);
    printf("L'avant derniere lettre de la phrase est : %c\n", phrase[strlen(phrase) -3]);
    return 0;
}
