#include <stdio.h>
#include <string.h>

int main() {
    char titre[100][20];
    char auteur[100][20];
    float prix [100];
    int quantite[100];
    int choix,x;
    int found=0,i;
    char nomm[50];
    char rech_a[20];
    char rech_t[20];
    char sup[50];
    do{
        printf("Gestion de Stock dans une Librairie\n");
        printf("choisissez une option parmi les suivantes entre 1 et 7\n");

        printf("1. Ajouter un Livre au Stock:\n");
        printf("2. Afficher Tous les Livres Disponibles:\n");
        printf("3. Mettre à Jour la Quantité d'un Livre:\n");
        printf("4. Supprimer un Livre du Stock\n");
        printf("5. Recherch:\n");
        printf("6. Afficher le nomber total des livres\n");
        printf("7_Quitter\n");

        printf("entrez votre choix :");
        scanf("%d", &choix);


        switch(choix)
        {
         case 1: printf("\nentrez le titer de livere %d:",x+1);
                   scanf("%s",&titre[x]);
                   printf("\nentrez le auteur de livere :");
                   scanf("%s",&auteur[x]);
                   printf("\nentrez le prix de livere :");
                   scanf("%f",&prix[x]);
                   printf("\nentrez la quantite de livere :");
                   scanf("%d",&quantite[x]);
                   x++;
           break;
         case 2 :

          for(i=0 ; i<x ; i++){
              printf("** \n");
              printf("%s \n", titre[i]);
              printf("%s \n", auteur[i]);
              printf("%.2f \n", prix[i]);
              printf("%d \n", quantite[i]);
          }
          break;
         case 3 :


         found = 0;
         printf("entrer le nom de livre à mis-jour");
         scanf("%s", &nomm);
         for(i = 0; i < x; i ++)
         {
             if(strcmp(nomm, titre[i]) == 0)
             {
                 printf("entrer le stock a ajoute: ");
                 scanf("%d", &quantite[i]);
                 printf("stock a ete mis-à-joure\n");
                 found++;
                 break;
             }
         }
         if(found == 0)
         {
         printf("\nlivre non trouve\n");
         }
          break;

          case 4 :

          found=0;
          printf("Entrer le titre de livre que vous voulez supprimer:\n");
          scanf("%s", &sup);
          for(i = 0; i < x; i ++)
         {
             if(strcmp(sup,titre[i]) == 0)
             {
                 strcpy(titre[i],titre[x-1]);
                 strcpy(auteur[i],auteur[x-1]);
                 prix[i]=prix[x-1];
                 quantite[i]=quantite[x-1];
                 x--;
                found=1;
                printf("Le livre est supprime\n");
                break;
             }

         }
          if(!found){
              printf("Le titre non trouver\n");
          } break;
          case 5:
    found=0;
    printf("entrez l'auteur : ");
    scanf("%s", &rech_a);
    printf("entrez le titre : ");
    scanf("%s", &rech_t);
    printf("%d :\n", x);

    for ( int i = 0; i < x; i++){
        printf("%s :  %s :\n", titre[i], auteur[i]);
        if (strcmp(rech_t, titre[i])==0 && strcmp(rech_a, auteur[i])==0){
            printf("%s\n", titre[i]);
            printf("%s\n",auteur[i]);
            printf("%.2f\n", prix[i]);
            printf("%d\n", quantite[i]);
            found=1;
            break;
        }
    }
        if(found==0) printf("le livre n'est pas disponible");



    break;

case 6:
    for(i=0 ; i<x ; i++){
        found = found + quantite[i];
    }
    printf("le nombre de livres est %d \n\n", found);
    break;

        }
    }while(choix!=7);







    return 0;
}
