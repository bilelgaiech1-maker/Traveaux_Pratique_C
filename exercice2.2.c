#include <stdio.h>
#include <stdlib.h>
int main()
{
    //int a , b ,r ;
    //printf("donner un entier");
    //scanf("%d",&a);
    //printf("donner un autre entier");
    //scanf("%d",&b);
    //r=a%b;
    //printf("le rest de la division eclidienne de a par b est %d",r);
    // 3.
    int h,m,s,r ;
    printf("donne le duree exprimee par second");
    scanf("%d",&s);
    h= s/3600;
    r=s%3600;
    m=r/60;
    s=r%60;
    printf("%d heure(s),%d minute(s),%d seconde(s) \n",h,m,s);
    return 0;
}
