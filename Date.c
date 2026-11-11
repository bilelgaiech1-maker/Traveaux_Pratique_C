#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jours,moin,annee ;
    do{
        printf("donner l'annee");
        scanf("%d",&annee);
    } while(annee<=0);
    do{
        printf("donner le moin");
        scanf("%d",&moin);
    } while ((moin<=0) || (moin>12));
    do{
        printf("donner le jours");
        scanf("%d",&jours);
    } while((jours<=0) || (jours>31));
    if (moin==2) {
        if (((annee%400)==0) || (((annee%4)==0 && (annee%100!=0)))){
            if (jours>29)
                printf("syntax invalide");
            else if (jours==29)
                printf("1 - 3 - %d \n",annee);
            else
                printf("%d - 2 - %d",jours+1,annee);
        }
        else{
            if (jours>=29)
                printf("syntax invalide");
            else if (jours==28)
                printf("1 - 3 - %d \n ",annee);
            else
                printf("%d - 2 - %d",jours+1,annee);
            }
        }
    else if (moin==12){
        if (jours==31)
            printf("1-1-%d",annee+1);
        else
            printf("%d - %d - %d",jours+1,moin,annee);
    }
    else if (moin==4 || moin==6 || moin==9 || moin==11){
        if (jours>30)
            printf("syntax invalide");
        else {
            if (jours==30)
                printf("1 - %d - %d \n",moin+1,annee);
            else
                printf("%d - %d - %d",jours+1,moin,annee);
        }
    }
    else {
        if (jours==31)
                printf("1 - %d - %d \n",moin+1,annee);
            else
                printf("%d - %d - %d",jours+1,moin,annee);
    }
    return 0;
    }

