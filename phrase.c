#include <stdio.h>
int main() {
    char phrase[100];
    printf("donner une phrase : ");
    //scanf("%s", &phrase);
    //printf("vous avez entre : %s\n", phrase);
    //scanf("%99[^\n]s", phrase);
    //printf("vous avez entre : %s\n", phrase);
    fgets(phrase, sizeof(phrase), stdin);
    printf("vous avez entre : %s\n", phrase);
    return 0;
}
