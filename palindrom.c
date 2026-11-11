#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
//#include <bool.h>
int main() {
    char phrase[100];
    printf("Entrez une phrase : ");
    fgets(phrase, sizeof(phrase), stdin);
    int i =0;
    int j=strlen(phrase)-1;
    bool palindrome = true;
    if (j%2==0){
        while ((i<j) && (palindrome)) {
            if (phrase[i] != phrase[j-1]) {
                palindrome = false;
                break;
            }
            i++;
            j--;
        }
    }
    else{
        while ((i<j) && (palindrome)) {
            if (phrase[i] != phrase[j-1]) {
                palindrome = false;
                break;
            }
            i++;
            j--;
        }

    }
    if (palindrome) {
        printf("La phrase est un palindrome.\n");
    } else {
        printf("La phrase n'est pas un palindrome.\n");
    }
    return 0;
}
