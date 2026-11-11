#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char phrase[100];
    printf("donner une phrase : ");
    fgets(phrase, sizeof(phrase), stdin);
    printf("vous avez entre : %s\n", phrase);
    int i=0;
    int count=0;
    for(i=0; phrase[i]!= '\0' ; i++){
        if (isdigit(phrase[i])){
            count++;
        }
        
    }
    if (count==0){
        printf("il n'y a pas de chiffre dans la phrase\n");
    }
    else{
        printf("il y a %d chiffres dans la phrase\n", count);
    }
    return 0;
}
