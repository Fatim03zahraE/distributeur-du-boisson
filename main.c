#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int choix,sucre,lait;
    float prix;
    char SUCRE[20],LAIT[20],BOISSON[20];
    do{
    printf("pour cafEe chosis :1\n");
    printf("pour thE chosis :2\n");
    printf("pour chocolat chosis :3\n");
    printf("pour soda chosis :4\n");
    printf("entrer votre choix:\n");
    scanf("%d",&choix);
    }while(choix<1 || choix>4);
    switch(choix)
    {
    case 1:
        strcpy(BOISSON,"cafe");
        prix=2;
        do{
        printf("voulez vous du sucre? \n");
        scanf("%d",&sucre);
        }while(sucre<0 || sucre>2);
        if(sucre==1)
        {
            prix+=0.25;
            strcpy(SUCRE,"sucree");

        }
        else if(sucre==2)
        {
            prix+=0.50;
            strcpy(SUCRE,"tres sucree");
        }
         else{
            prix=2;
            strcpy(SUCRE,"non sucree");
    }
    do{
        printf("voulez vous du lait? \n");
        scanf("%d",&lait);
        }while(lait<1 || lait>2);
        if(lait==1)
        {
            prix+=1;
            strcpy(LAIT,"avec lait");

        }
        else {
            prix=2;
            strcpy(LAIT,"sans lait");
        }
            break;

    case 2:
        strcpy(BOISSON,"The");
        prix=2;

 do{
        printf("voulez vous du sucre? \n");
        scanf("%d",&sucre);
        }while(sucre<0 || sucre>2);
        if(sucre==1)
        {
            prix+=0.25;
            strcpy(SUCRE,"sucree");

        }
        else if(sucre==2)
        {
            prix+=0.50;
            strcpy(SUCRE,"tres sucree");
        }
         else{
            prix=2;
            strcpy(SUCRE,"non sucree");
    }
    do{
        printf("voulez vous du lait? \n");
        scanf("%d",&lait);
        }while(lait<1 || lait>2);
        if(lait==1)
        {
            prix+=1;
            strcpy(LAIT,"avec lait");

        }
        else {
            prix=2;
            strcpy(LAIT,"sans lait");
        }
            break;

    case 3:
        strcpy(BOISSON,"chocolat");
        prix=2.5;
        do{
        printf("voulez vous du sucre? \n");
        scanf("%d",&sucre);
        }while(sucre<0 || sucre>2);
        if(sucre==1)
        {
            prix+=0.25;
            strcpy(SUCRE,"sucree");

        }
        else if(sucre==2)
        {
            prix+=0.50;
            strcpy(SUCRE,"tres sucree");
        }
         else{
            prix=2;
            strcpy(SUCRE,"non sucree");
    }
    do{
        printf("voulez vous du lait? \n");
        scanf("%d",&lait);
        }while(lait<1 || lait>2);
        if(lait==1)
        {
            prix+=1;
            strcpy(LAIT,"avec lait");

        }
        else {
            prix=2.5;
            strcpy(LAIT,"sans lait");
        }
    case 4:
        strcpy(BOISSON,"Soda");
        prix=3;
        break;
    default:
        printf("error");
    }
    printf("\nvous devez payer :%f dh",prix);
    printf("\nvotre %s est %s avec %s est pret",BOISSON,SUCRE, LAIT);
    return 0;

}
