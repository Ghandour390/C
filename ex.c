#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
typedef struct
{

    int jj;
    int mm;
    int nn;
    long int js;
} date;

typedef struct
{
    char nom[30];
    char prenom[30];
    char tele[12];
    char cin[10];
    int age;
    char statut[9];
    date date;
    int ID;
} reservation;
reservation Re[100];
int choix, nbr = 10, i,c;
char recherche[30];
int menu()
{
    printf("=====================================================================\n");
    printf("1)  | Affiche les reservation \n");
    printf("----|----------------------------------------------------------------\n");
    printf("2 ) | Ajoute les reservation \n");
    printf("----|----------------------------------------------------------------\n");
    printf("3 ) |recherche par nom ou prenom \n");
    printf("----|----------------------------------------------------------------\n");
    printf("4 ) |Modification de reservation \n");
    printf("----|----------------------------------------------------------------\n");
    printf("5)  |suprimer le reservattion \n");
    printf("----|---------------------------------------------------------------\n");
    printf("6)  |le ordre de reservation \n");
    printf("----|----------------------------------------------------------------\n");
    printf("7)  |le statistique de reservation \n");
    printf("----|----------------------------------------------------------------\n");
    printf("8)  |fermmez le programme \n");
    printf("====|=================================================================\n");
    printf("    |entre le choix:  \n");
    scanf("%d", &choix);
    printf("====|=================================================================\n");
    return choix;
}
void initial()
{
    // 10 RESERVATIONS INITIALES
    strcpy(Re[0].nom, "ghandour");
    strcpy(Re[0].prenom, "abdelhak");
    strcpy(Re[0].tele, "0624530546");
    strcpy(Re[0].cin, "WB180183");
    Re[0].age = 28;
    strcpy(Re[0].statut, "valide");
    Re[0].date.jj = 6;
    Re[0].date.mm = 11;
    Re[0].date.nn = 2024;
    Re[0].ID = 1;

    strcpy(Re[1].nom, "MARWAN");
    strcpy(Re[1].prenom, "abdelhak");
    strcpy(Re[1].tele, "068468645");
    strcpy(Re[1].cin, "WB15367658");
    Re[1].age = 29;
    strcpy(Re[1].statut, "valide");
    Re[1].date.jj = 5;
    Re[1].date.mm = 10;
    Re[1].date.nn = 2024;
    Re[1].ID = 2;

    strcpy(Re[2].nom, "ZAKARIA");
    strcpy(Re[2].prenom, "KRDAX");
    strcpy(Re[2].tele, "068734873");
    strcpy(Re[2].cin, "WB8776865");
    Re[2].age = 78;
    strcpy(Re[2].statut, "valide");
    Re[2].date.jj = 5;
    Re[2].date.mm = 10;
    Re[2].date.nn = 2024;
    Re[2].ID = 3;

    strcpy(Re[3].nom, "amal");
    strcpy(Re[3].prenom, "dal");
    strcpy(Re[3].tele, "0698967097");
    strcpy(Re[3].cin, "WB654766");
    Re[3].age = 46;
    strcpy(Re[3].statut, "traite");
    Re[3].date.jj = 5;
    Re[3].date.mm = 10;
    Re[3].date.nn = 2024;
    Re[3].ID = 4;

    strcpy(Re[4].nom, "fadwa");
    strcpy(Re[4].prenom, "abd");
    strcpy(Re[4].tele, "0698798988");
    strcpy(Re[4].cin, "WB1765787");
    Re[4].age = 68;
    strcpy(Re[4].statut, "reporte");
    Re[4].date.jj = 23;
    Re[4].date.mm = 7;
    Re[4].date.nn = 2024;
    Re[4].ID = 5;

    strcpy(Re[5].nom, "HICHAM");
    strcpy(Re[5].prenom, "aFDFG");
    strcpy(Re[5].tele, "0697887876");
    strcpy(Re[5].cin, "WB180183");
    Re[5].age = 76;
    strcpy(Re[5].statut, "annule");
    Re[5].date.jj = 15;
    Re[5].date.mm = 4;
    Re[5].date.nn = 2024;
    Re[5].ID = 6;

    strcpy(Re[6].nom, "KJGFD");
    strcpy(Re[6].prenom, "jhgjh");
    strcpy(Re[6].tele, "0697887876");
    strcpy(Re[6].cin, "BV576576");
    Re[6].age = 86;
    strcpy(Re[6].statut, "annule");
    Re[6].date.jj = 15;
    Re[6].date.mm = 4;
    Re[6].date.nn = 2024;
    Re[6].ID = 7;

    strcpy(Re[7].nom, "SKFJ");
    strcpy(Re[7].prenom, "SKDNN");
    strcpy(Re[7].tele, "063475477");
    strcpy(Re[7].cin, "CN738478");
    Re[7].age = 35;
    strcpy(Re[7].statut, "reporte");
    Re[7].date.jj = 14;
    Re[7].date.mm = 9;
    Re[7].date.nn = 2024;
    Re[7].ID = 8;

    strcpy(Re[8].nom, "dfhhgrzoi");
    strcpy(Re[8].prenom, "qkdk");
    strcpy(Re[8].tele, "0634783746");
    strcpy(Re[8].cin, "KD64838");
    Re[8].age = 19;
    strcpy(Re[8].statut, "reporte");
    Re[8].date.jj = 18;
    Re[8].date.mm = 9;
    Re[8].date.nn = 2024;
    Re[8].ID = 9;

    strcpy(Re[9].nom, "xkjvd");
    strcpy(Re[9].prenom, "anas");
    strcpy(Re[9].tele, "0633446665");
    strcpy(Re[9].cin, "CN45356");
    Re[9].age = 18;
    strcpy(Re[9].statut, "reporte");
    Re[9].date.jj = 19;
    Re[9].date.mm = 9;
    Re[9].date.nn = 2024;
    Re[9].ID = 10;
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
    scanf("%s", Re[nbr].nom);

    printf("entre le prenom:  \n");
    scanf("%s", Re[nbr].prenom);

    printf("====================================\n");
    printf("numero de telephone: \n");
    scanf("%s", Re[nbr].tele);
    printf("====================================\n");
    printf("cin: \n");
    scanf("%s", Re[nbr].cin);
    printf("====================================\n");
    printf("statut: \n");
    scanf("%s", Re[nbr].statut);
    printf("====================================\n");
    printf("age: \n");
    scanf("%d", &Re[nbr].age);
    printf("====================================\n");
    Re[nbr].ID++;
    printf("ID=%d\n", Re[nbr].ID);
    nbr++;
}
void afficher()
{
    if (nbr == 0)
    {
        printf("============aucun rendiveux=================\n");
    }
    else
    {
        for (int i = 0; i < nbr; i++)
        {
            printf("====================================\n");
            printf("DATE: %d /%d /%d  \n", Re[i].date.jj, Re[i].date.mm, Re[i].date.nn);
            printf("====================================\n");
            printf("entre le nom:%s  \n", Re[i].nom);
            printf("entre le prenom: %s \n", Re[i].prenom);
            printf("====================================\n");
            printf("numero de telephone:%s \n", Re[i].tele);
            printf("====================================\n");
            printf("cin:%s \n", Re[i].cin);
            printf("====================================\n");
            printf("age:%d \n", Re[i].age);
            printf("====================================\n");
            printf("statut:%s \n", Re[i].statut);
            printf("====================================\n");
            printf("ID: %d\n", Re[i].ID);
        }
    }
}
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
            printf("cin:%d \n", Re[i].age);
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
            printf("age: \n");
            scanf("%d", &Re[i].age);
            printf("====================================\n");
            printf("statut: \n");
            scanf("%s", Re[i].statut);
        }
        else
            printf("======n'exist pas le rendiveux=====\n");
    }
}
int choix_de_tri(){
        printf("=====================================================================\n");
        printf("1)  | tri par nom \n");
        printf("----|----------------------------------------------------------------\n");
        printf("2 ) | tri par date \n");
        printf("----|----------------------------------------------------------------\n");
        printf("3 ) | tri par statut \n");
        printf("====|=================================================================\n");
        printf("    |entre le choix:  \n");
        scanf("%d", &c);
        printf("====|=================================================================\n");
        return c;
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
    
    do
    {

        switch (c)
        {
            reservation x;
        case 1:
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

            afficher();
            break;
        case 2:
            Re[i].date.js = 365 * Re[i].date.nn + 30 * Re[i].date.mm + Re[i].date.jj;
            
                for (int i = 0; i < nbr; i++)
                {
                    for (int j = 0; j < nbr - 1; j++)
                    {
                        
                        {
                            x = Re[j];
                            Re[j] = Re[j + 1];
                            Re[j + 1] = x;
                        }
                    }
                }
            
            afficher();

            break;
        case 3:
        {
            printf("*********** Affichage des réservations par statut ***********\n");

            printf("Réservations validees:\n");
            for (int i = 0; i < nbr; i++)
            {
                if (strcmp(Re[i].statut, "valide") == 0)
                {
                    printf("Nom: %s, Prénom: %s, Statut: %s\n", Re[i].nom, Re[i].prenom, Re[i].statut);
                }
            }

            printf("\nreseravation reportees:\n");
            for (int i = 0; i < nbr; i++)
            {
                if (strcmp(Re[i].statut, "reporte") == 0)
                {
                    printf("Nom: %s, Prénom: %s, Statut: %s\n", Re[i].nom, Re[i].prenom, Re[i].statut);
                }
            }

            printf("\nreservation  annulees:\n");
            for (int i = 0; i < nbr; i++)
            {
                if (strcmp(Re[i].statut, "annule") == 0)
                {
                    printf("Nom: %s, Prénom: %s, Statut: %s\n", Re[i].nom, Re[i].prenom, Re[i].statut);
                }
            }

            printf("\nreservation annulees:\n");
            for (int i = 0; i < nbr; i++)
            {
                if (strcmp(Re[i].statut, "traite") == 0)
                {
                    printf("Nom: %s, Prenom: %s, Statut: %s\n", Re[i].nom, Re[i].prenom, Re[i].statut);
                }
            }
        }
        break;
        default:
            printf("=====entre la valour entre 1 et 3======== \n");
            getch();
        }
    } while (c != 4);

    
}

void statistique()
{
    int moyenne, i;
    int totalage = 0;
    for (int i = 0; i < nbr; i++)
    {
        totalage = totalage + Re[i].age;
    }
    moyenne = totalage / nbr;
    printf("======= la moyenne de l'age=%d========== \n", moyenne);
    for (int i = 0; i < nbr; i++)
    {
        if (Re[i].age <= 18)
        {
            printf("==========================================\n");
            printf("DATE: %d/%d/%d \n", Re[i].date.jj, Re[i].date.mm, Re[i].date.nn);
            printf("====================================\n");
            printf("entre le nom:%s  \n", Re[i].nom);
            printf("entre le prenom: %s \n", Re[i].prenom);
            printf("====================================\n");
            printf("numero de telephone:%s \n", Re[i].tele);
            printf("====================================\n");
            printf("cin:%s \n", Re[i].cin);
            printf("====================================\n");
            printf("cin:%s \n", Re[i].cin);
            printf("====================================\n");
            printf("statut:%s \n", Re[i].statut);
            printf("====================================\n");
            printf("ID: %d\n", Re[i].ID);
        }
        else if (Re[i].age >= 19 && Re[i].age <= 35)
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
            printf("cin:%d \n", Re[i].age);
            printf("====================================\n");
            printf("statut:%s \n", Re[i].statut);
            printf("====================================\n");
            printf("ID: %d\n", Re[i].ID);
        }
        else
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
            printf("cin:%s \n", Re[i].cin);
            printf("====================================\n");
            printf("cin:%d \n", Re[i].age);
            printf("====================================\n");
            printf("statut:%s \n", Re[i].statut);
            printf("====================================\n");
            printf("ID: %d\n", Re[i].ID);
        }
    }
}

int main()
{
    initial();
    char ch[30];
    do
    {
        choix = menu();
        switch (choix)
        {
        case 1:
            printf("***************** Affiche les reservation****************\n");
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
            printf("***************suprimer************************\n");
            trie();
            getch();
            break;
        case 6:
            printf("***************ordre de reservation************************\n");
            c=choix_de_tri();
            trie();
            getch();
            break;

        case 7:
            printf("*************le statistique de reservation****************\n");
            statistique();
            getch();
            break;
        case 8:
            printf("*************fermmez le programme***********************\n");
            system("pause");
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
