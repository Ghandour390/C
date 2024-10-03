#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
typedef struct
{
    int jj;
    int mm;
    int nn;
} date;

typedef struct
{
    char nom[30];
    char prenom[30];
    int age[3];
    char tele[12];
    char cin[10];
    char statut[7];
    date date;
    int ID;
} reservation;
reservation Re[100];
int choix, nbr = 0;
char recherche[30];
int menu()
{
    printf("=====================================================================\n");
    printf("1) Affiche les reservation \n");
    printf("--------------------------------------------------------------------\n");
    printf("2 ) Ajoute les reservation \n");
    printf("--------------------------------------------------------------------\n");
    printf("3 )recherche par nom ou prenom \n");
    printf("--------------------------------------------------------------------\n");
    printf("4 ) Modification de reservation \n");
    printf("--------------------------------------------------------------------\n");
    printf("5) suprimer le reservattion \n");
    printf("--------------------------------------------------------------------\n");
    printf("6) le ordre de reservation \n");
    printf("--------------------------------------------------------------------\n");
    printf("7) le statistique de reservation \n");
    printf("=====================================================================\n");
    printf("entre le choix: ");
    scanf("%d", &choix);
    printf("=====================================================================\n");
    return choix;
}
void ajouter()
{

    printf("entre la date jj/mm/nn \n");
    printf("====================================\n");
    printf("jour:  \n");
    scanf("%d", &Re[nbr].date.jj);

    printf("mois:  \n");
    scanf("%d", &Re[nbr].date.mm);

    printf("anne:  \n");
    scanf("%d", &Re[nbr].date.nn);
    printf("====================================\n");
    printf("entre le nom:  \n");
    scanf("%s", &Re[nbr].nom);

    printf("entre le prenom:  \n");
    scanf("%s", &Re[nbr].prenom);

    printf("====================================\n");
    printf("numero de telephone: \n");
    scanf("%s", &Re[nbr].tele);
    printf("====================================\n");
    printf("cin: \n");
    scanf("%s", &Re[nbr].cin);
    printf("====================================\n");
    printf("statut: \n");
    scanf("%s", &Re[nbr].statut);
    printf("====================================\n");
    Re[nbr].ID = rand() % 1000;
    printf("ID=%d\n", Re[nbr].ID);
    nbr++;
}
void afficher()
{ if(nbr=0){
printf("============aucun rediveux=================\n");
}else{
    for (int i = 0; i < nbr; i++)
    {
        printf("====================================\n");
        printf("DATE: %d/%d/%d \n", Re[i].date.jj, Re[i].date.mm, Re[i].date.nn);
        printf("====================================\n");
        printf("entre le nom:%s  \n", Re[i].nom);
        printf("entre le prenom: %s \n", Re[i].prenom);
        printf("====================================\n");
        printf("numero de telephone:%s \n", Re[i].tele);
        printf("====================================\n");
        printf("cin:%s \n", Re[i].cin);
        printf("====================================\n");
        printf("statut:%s \n", Re[i].statut);
        printf("====================================\n");
        printf("statut: %d\n", Re[i].ID);
    }
}}
void rechercher()
{
    printf("entre le nom ou le prenom ou cin: \n");
    scanf("%s", &recherche);
    for (int i = 0; i < nbr; i++)
    {
        if (strcmp(Re[i].nom, recherche) == 0 || strcmp(Re[i].prenom, recherche) == 0 || strcmp(Re[i].cin, recherche) == 0)
        {
            printf("===========il'exste un resirvation=====\n");
            printf("====================================\n");
            printf("DATE: %d/%d/%d \n", Re[i].date.jj, Re[i].date.mm, Re[i].date.nn);
            printf("====================================\n");
            printf("entre le nom:%s  \n", Re[i].nom);
            printf("entre le prenom: %s \n", Re[i].prenom);
            printf("====================================\n");
            printf("numero de telephone:%s \n", Re[i].tele);
            printf("====================================\n");
            printf("cin:%s \n", Re[i].cin);
            printf("====================================\n");
            printf("statut:%s \n", Re[i].statut);
            printf("====================================\n");
            printf("statut: %d\n", Re[i].ID);
        }
        else
            printf("====== n'exist pas le rendiveux=========\n");
    }
}
void modifie()
{
    for (int i = 0; i < nbr; i++)
    {
        printf("entre le nom ou le prenom ou cin: \n");
        scanf("%s", &recherche);
        if (strcmp(Re[i].nom, recherche) == 0 || strcmp(Re[i].prenom, recherche) == 0 || strcmp(Re[i].cin, recherche) == 0)
        {
            printf("entre la date jj/mm/nn \n");
            printf("====================================\n");
            printf("jour:  \n");
            scanf("%d", Re[i].date.jj);

            printf("mois:  \n");
            scanf("%d", Re[i].date.mm);

            printf("anne:  \n");
            scanf("%d", Re[i].date.nn);
            printf("====================================\n");
            printf("entre le nom:  \n");
            scanf("%s", Re[i].nom);

            printf("entre le prenom:  \n");
            scanf("%s", Re[i].nom);
            printf("====================================\n");
            printf("numero de telephone: \n");
            scanf("%s", Re[i].tele);
            printf("====================================\n");
            printf("cin: \n");
            scanf("%s", Re[i].cin);
            printf("====================================\n");
            printf("statut: \n");
            scanf("%s", Re[i].statut);
        }
        else
            printf("======n'exist pas le rendiveux=====\n");
    }
}
void supprimer()
{
    printf("entre le nom ou le prenom ou cin: \n");

    scanf("%s", &recherche);

    int trouve = 0;

    for (int i = 0; i < nbr; i++)
    {

        if (strcmp(Re[i].nom, recherche) == 0 || strcmp(Re[i].prenom, recherche) == 0 || strcmp(Re[i].cin, recherche) == 0)
        {
            trouve = 1;

            printf("============elle existe le randiveux==========");

            for (int j = i; j < nbr - 1; j++)
            {
                Re[j] = Re[j + 1];
            }

            nbr--;

            printf("===== la reservation est supprimee avec succes =====\n");
            break;
        }
    }
    if (!trouve)
    {
        printf("====== n'exist pas le rendiveux =====\n");
    }
}

void trie()
{   
    reservation x;

    for (int i = 0; i < nbr; i++)
    {
        for (int j = 0; j < nbr - 1; j++)
        {
            if (strcmp(Re[j].nom, Re[j + 1].nom) > 0)
            {
                x = Re[j];
                Re[j] = Re[j + 1];
                Re[j + 1] = x;
            }
        }
    }
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
            printf("*****************Affiche les reservation****************\n");
            afficher();
getch();
            break;
        case 2:
            printf("****************Ajoute les reservation******************\n");
            ajouter();
            getch();
            break;
        case 3:
            printf("*******************recherche par nom ou prenom***********\n");
            rechercher();
            getch();
            break;
        case 4:
            printf("****************Modifie de reservation********************\n");
            modifie();
            getch();
            break;
        case 5:
            printf("***************ordre de reservation************************\n");
getch();
            break;

        case 6:
            printf("*************le statistique de reservation****************\n");
getch();
            break;
        case 7:
            printf("*************fermmez le programme***********************\n");
                     system("cls");
            break;

        default:
            printf("********entrez le choix valide!!!***********************\n");
            getch();
            break;
        }
    } while (choix != 7);
    {
        getch();
    }
    return 0;
}
