#include <stdio.h>
#include <stdlib.h>
int main()
{
    float r;
    double pi=3.141592 ,S,P;
    printf("donner le rayon de cercle");
    scanf("%f",&r);
    P=2*pi*r;
    S=pi*r*r;
    printf(" le perimetre est egal %lf,  la surface est egal %lf, \n",P,S);
    return 0;
}
