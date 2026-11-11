#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,r;
    char o;
    printf("donner un nombre");
    scanf("%f",&a);
    printf("donner l'operateur mathematique");
    scanf(" %c",&o);
    if (o!='+' && o!='/' && o!='*' && o!='-')
        printf("syntax invalide");
    else if (o=='/' && a==0 )
        printf("division par 0 est impossible\n");
    else
     {
         printf("donner un autre nombre\n");
         scanf("%f",&b);
         if (o=='+')
        {
            r=b+a;
            printf("%f %c %f = %f",b,o,a,r);
        }
        else if (o=='-')
        {
            r=b-a;
            printf("%f %c %f = %f",b,o,a,r);
        }
        else if (o== '*')
        {
            r=b*a;
            printf("%f %c %f = %f",b,o,a,r);
        }
        else
        {
            r=b/a;
            printf("%f %c %f = %f",b,o,a,r);
        }
     }

    return 0;
}
