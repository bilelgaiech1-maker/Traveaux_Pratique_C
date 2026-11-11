#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i=2,p=1;
    do {
        printf("donner un entier strictement positif:");
        scanf("%d",&a);
    } while (a<=1);
    while (i*i<=a && p==1){
        if (a%i==0){
           p=0;
        }
        i=i+1;
    }
    if (p==1){
        printf("%d est premier\n",a);
    }
    else{
        printf("%d n'est pas premier\n",a);
    }
return 0;
    }
