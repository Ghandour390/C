#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int choix, nbr = 0;
typedef struct
{
    char nom[30];
    char prenom[30];
    char email[100];
    char nemuro[12];
} Contact;
Contact Co[1000];
int choix, n;
int menu()
{
    printf("=====================================================================\n");
    printf("1) Ajoute un contact \n");
     printf("--------------------------------------------------------------------\n");
    printf("2 )affiche le liste de contact \n");
     printf("--------------------------------------------------------------------\n");
    printf("3 )recherche par nom ou prenom \n");
     printf("--------------------------------------------------------------------\n");
    printf("4 ) Modification de contact \n");
     printf("--------------------------------------------------------------------\n");
    printf("5) suprimer un contact \n");
     printf("--------------------------------------------------------------------\n");
    printf("6) fermmez le programme \n");
     printf("=====================================================================\n");
     printf("entre le choix: ");
    scanf("%d", &choix);
      printf("=====================================================================\n");
    return choix;
}
int main()
{
    char ch[30];
    do
    {
        choix = menu();
        switch (choix)
        {
        case 1:
{
            int n;
            printf("================Ajoute un contact===============================\n");
            printf("combien les contact vous ajoutez: \n");
            scanf("%d", &n);
            for (int i = nbr; i < (nbr + n); i++)
            {
                printf("_____________________________________________________________\n");
                printf("entre le contact %d \n", i, nbr + 1);
                printf("_____________________________________________________________\n");
                printf("entre le nom: \n");
                scanf("%s", &Co[i].nom);

                printf("entre le prenom: \n");
                scanf("%s", &Co[i].prenom);

                printf("entre le Email: \n");
                scanf("%s", &Co[i].email);

                printf("entre le nemero de telephone: \n");
                scanf("%s", &Co[i].nemuro);
            }
            nbr = nbr + n;
}
            break;

        case 2:
{
            printf("==========Affiche le liste de contact======================\n");
            if (nbr == 0)
                printf("aucun contact");
            else
            {
                for (int i = 0; i < nbr; i++)
                {
                    printf("***********************************************************\n");
                    printf("nom:%s \n", Co[i].nom);
                    printf("_____________________________________________________________\n");
                    printf("prenom: %s\n", Co[i].prenom);
                    printf("_____________________________________________________________\n");
                    printf("nom: %s\n", Co[i].email);
                    printf("_____________________________________________________________\n");
                    printf("nom:\n %s", Co[i].nemuro);
                    printf("**************************************************************\n");
                }
            }
}
            break;

        case 3:
        {
            printf("==========recherche par nom ou prenom le contact==========\n");
            printf("entre le nom ou le prenom: \n");
            scanf("%s", &ch);
            for (int i = 0; i < nbr; i++)
            {
                if ((strcmp(Co[i].nom, ch) == 0) || (strcmp(Co[i].nom, ch) == 0))
                {
                    printf("***********************************************************\n");
                    printf("nom:%s \n", Co[i].nom);
                    printf("_________________________________________________________\n");
                    printf("prenom: %s\n", Co[i].prenom);
                    printf("_____________________________________________________________\n");
                    printf("email: %s\n", Co[i].email);
                    printf("_____________________________________________________________\n");
                    printf("nemuro:\n %s", Co[i].nemuro);
                    printf("**************************************************************\n");
                }
                else
                {
                    printf("le contact n'est exist pas ");
                }
            }
        }
                break;

            case 4:{

                printf("==========modifie de contact===============================\n");
                printf("entre le nom ou le prenom: \n");
                scanf("%[^\n]s", &ch);
                for (int i = 0; i < nbr; i++)
                {
                    if (strcasecmp(Co[i].nom, ch) == 0)
                    {
                        printf("***********************************************************\n");
                        printf("|entre le neuveau nom: |\n");
                        scanf("%s", Co[i].nom);
                        printf("_____________________________________________________________\n");
                        printf("| entre li neuveau prenom: %s\n                     |");
                        scanf("%s", Co[i].prenom);
                        printf("_____________________________________________________________\n");
                        printf("|entre le neuveau email:                            | %s\n");
                        scanf("%s", Co[i].email);
                        printf("_____________________________________________________________\n");
                        printf("| entre le neuveau nemuro:                           |\n %s");
                        scanf("%s", Co[i].nemuro);
                        printf("**************************************************************\n");
                    }
                    else if (strcasecmp(Co[i].prenom, ch) == 0)
                    {
                        printf("***********************************************************\n");
                        printf("|entre le neuveau nom: |\n");
                        scanf("%s", Co[i].nom);
                        printf("_____________________________________________________________\n");
                        printf("| entre li neuveau prenom: %s\n                     |");
                        scanf("%s", Co[i].prenom);
                        printf("_____________________________________________________________\n");
                        printf("|entre le neuveau email:                            | %s\n");
                        scanf("%s", Co[i].email);
                        printf("_____________________________________________________________\n");
                        printf("| entre le neuveau nemuro:                           |\n %s");
                        scanf("%s", Co[i].nemuro);
                        printf("**************************************************************\n");
                    }
                    else
                    {
                        printf("le contact n'est exist pas ");
                    }
                }
                }
                break;

            case 5 :{

                printf("==========seprimer un contact==========================\n");
                printf("entre le nom ou le prenom: \n");
                scanf("%s", &ch);
                for (int i = 0; i < nbr; i++)
                {
                    if (strcasecmp(Co[i].nom, ch) == 0)
                    {
                        for (int j = i; j < nbr - 1; i++)
                        {
                            strcpy(Co[j + 1].nom, Co[j].nom);
                            strcpy(Co[j + 1].prenom, Co[j].prenom);
                            strcpy(Co[j + 1].email, Co[j].email);
                            strcpy(Co[j + 1].nemuro, Co[j].nemuro);
                        }
                        nbr--;
                    }
                    else if (strcasecmp(Co[i].prenom, ch) == 0)
                    {
                        for (int j = i; j < nbr - 1; i++)
                        {
                            strcpy(Co[j + 1].nom, Co[j].nom);
                            strcpy(Co[j + 1].prenom, Co[j].prenom);
                            strcpy(Co[j + 1].email, Co[j].email);
                            strcpy(Co[j + 1].nemuro, Co[j].nemuro);
                        }
                        nbr--;
                    }else 
                    printf("le contact n'est exist pas ");
                }

                        break;

                    case 6:
                        printf("==========Au rovoir==========================\n");
                        break;
                    default:
                    {
                        printf("entrez le choix valide");
                    }
        }
                        
          }      } while (choix != 6);
                getch();

                return 0;
            }
