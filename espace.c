#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
    char phrase[100];
    char phrase2[10];

    printf("Donner une phrase : ");
    fgets(phrase, sizeof(phrase), stdin);

    int i, j = 0;
    int espace = 0;

    for(i = 0; phrase[i] != '\0'; i++)
    {
        if(phrase[i] != ' ')
        {
            phrase2[j++] = phrase[i];
            espace = 0;
        }
        else
        {
            if(espace == 0)
            {
                phrase2[j++] = ' ';
                espace = 1;
            }
        }
    }

    phrase2[j] = '\0';

    printf("Phrase corrigee : %s", phrase2);

    return 0;
}
