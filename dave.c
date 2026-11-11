#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char phrase[100];
    char mots[20][20];
    int n = 0, j = 0;
    bool valid = true;
   // do 
    //{
      //  printf("Donner une phrase : ");
    //    fgets(phrase, sizeof(phrase), stdin);
       // for (int i = 0; phrase[i] != '\0'; i++)
    //    {
   //         if}
    printf("Donner une phrase : ");
    fgets(phrase, sizeof(phrase), stdin);
    for(int i = 0; ; i++)
    {
        if(phrase[i] == ' ' || phrase[i] == '\n' || phrase[i] == '\0')
        {
            mots[n][j] = '\0';
            n++;
            j = 0;

            if(phrase[i] == '\n' || phrase[i] == '\0')
                break;
        }
        else
        {
            mots[n][j] = phrase[i];
            j++;
        }
    }
    char temp[20];

    for(int i = 0; i < n-1; i++)
    {
        for(int k = i+1; k < n; k++)
        {
            if(strcmp(mots[i], mots[k]) > 0)
            {
                strcpy(temp, mots[i]);
                strcpy(mots[i], mots[k]);
                strcpy(mots[k], temp);
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        mots[i][0] = toupper(mots[i][0]);
    }

    printf("Nombre de mots : %d\n", n);

    printf("Resultat : ");
    for(int i = 0; i < n; i++)
    {
        printf("%s ", mots[i]);
    }

    return 0;
}
