#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
    char phrase[100];
    printf("donner une phrase : ");
    fgets(phrase, sizeof(phrase), stdin);
    int i = 0;
    int count = 0;
    for (i = 0; phrase[i] != '\0'; i++) {
        if (isupper(phrase[i])) {
            count++;
        }  
    }
    printf("le nombre de lettres majuscules dans la phrase est : %d\n", count);
    return 0;
  
}
