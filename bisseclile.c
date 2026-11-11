#include <stdio.h>
#include <stdlib.h>
int main()
{
    int annee ;
    printf("donner l'annee");
    scanf("%d",&annee);
    if ((annee%400)==0 || (annee%4)==0 && annee%10!=0)
        printf("%d est bissectile",annee);
    else
        printf("%d n'est pas bisseclile",annee);
    return 0;
}
