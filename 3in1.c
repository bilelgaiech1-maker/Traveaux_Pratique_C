#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main() {
    char phrase[100];
    printf("donner une phrase : ");
    fgets(phrase, sizeof(phrase), stdin);
    printf("vous avez entre : %s\n", phrase);
    printf("la deriner lettre de votre phrase est : %c\n", phrase[strlen(phrase) - 2]);
    printf("L'avant derniere lettre de la phrase est : %c\n", phrase[strlen(phrase) -3]);
    int i = 0;
    int count = 0;
    for (i = 0; phrase[i] != '\0'; i++) {
        switch (toupper(phrase[i])) {
            case 'A':
                count++;
                break;
            case 'E':
                count++;
                break;
            case 'I':
                count++;
                break;
            case 'O':   
                count++;        
                break;
            case 'U':
                count++;
                break;
            case 'Y':
                count++;
                break;
        }  
    }
    printf("le nombre des voyelles dans la phrase est : %d\n", count);
    int voy = 0;
    for (i = 0; phrase[i] != '\0'; i++) {
        if (isupper(phrase[i])) {
            voy++;
        }  
    }
    int chifre = 0;
    printf("le nombre de lettres majuscules dans la phrase est : %d\n", voy);
    for(i=0; phrase[i]!= '\0' ; i++){
        if (isdigit(phrase[i])){
            chifre++;
        }
        
    }
    if (chifre==0){
        printf("il n'y a pas de chiffre dans la phrase\n");
    }
    else{
        printf("il y a %d chiffres dans la phrase\n", chifre);
    }
    return 0;
}
