#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n5 , n10, n20 , n50 ,m ;
    printf("donner un montant , (il doit etre multiple de 5):");
    scanf("%d",&m);
    n50=m/50;
    m=m%50;
    n20=m/20;
    m=m%20;
    n10=m/20;
    m=m%10;
    n5=m/5;
    m=m%5;
    printf("nombre minimum de biller: %d\n", n50+n20+n10+n5  );
    return 0;
}
