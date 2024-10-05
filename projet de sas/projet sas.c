#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <stdbool.h>
#include<time.h>
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
int choix, nbr = 10, i, c;
char recherche[30];

int menu()
{
    int choix;
    bool valid_entrer;

    do
    {
        printf("=====================================================================\n");
        printf("1)  | Affiche les reservation \n");
        printf("----|----------------------------------------------------------------\n");
        printf("2 ) | Ajoute les reservation \n");
        printf("----|----------------------------------------------------------------\n");
        printf("3 ) | recherche par nom ou prenom \n");
        printf("----|----------------------------------------------------------------\n");
        printf("4 ) | Modification de reservation \n");
        printf("----|----------------------------------------------------------------\n");
        printf("5)  | suprimer le reservation \n");
        printf("----|----------------------------------------------------------------\n");
        printf("6)  | trie de reservation \n");
        printf("----|----------------------------------------------------------------\n");
        printf("7)  | statistique de reservation \n");
        printf("----|----------------------------------------------------------------\n");
        printf("8)  | ferme le programme \n");
        printf("====|=================================================================\n");
        printf("    | Entrez le choix (entre 1 et 8):  \n");

        valid_entrer = (scanf("%d", &choix) == 1);

        while (getchar() != '\n')
            ;

        if (!valid_entrer || choix < 1 || choix > 8)
        {
            printf("Choix invalide. Veuillez entrer un nombre entre 1 et 8.\n");
        }

        printf("====|=================================================================\n");
    } while (!valid_entrer);

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
    srand(time(0)+clock());

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
    
    Re[nbr].ID = rand();
    printf("ID=%d \n",Re[nbr].ID);
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
            printf("\n");
            printf("****************** RENDEZ-VOUS %d ******************\n", i + 1);
            printf("DATE: %d / %d / %d\n", Re[i].date.jj, Re[i].date.mm, Re[i].date.nn);
            printf("----------------------------------------------------\n");
            printf("Nom: %s\n", Re[i].nom);
            printf("Prenom: %s\n", Re[i].prenom);
            printf("Telephone: %s\n", Re[i].tele);
            printf("CIN: %s\n", Re[i].cin);
            printf("Age: %d\n", Re[i].age);
            printf("Statut: %s\n", Re[i].statut);
            printf("ID: %d\n", Re[i].ID);
            printf("*****************************************************\n");
        }
    }
}

void rechercher()
{
    int choix;
    char recherche[50];

    printf("Voulez-vous rechercher par ID (entrez 1) ou par nom/prenom/CIN (entrez 2)?\n");
    scanf("%d", &choix);

    if (choix == 1)
    {

        int id;
        printf("Entrez le ID: \n");
        scanf("%d", &id);

        for (int i = 0; i < nbr; i++)
        {
            if (Re[i].ID == id)
            {
                printf("===========Il existe une reservation=====\n");
                printf("====================================\n");
                printf("DATE: %d/%d/%d \n", Re[i].date.jj, Re[i].date.mm, Re[i].date.nn);
                printf("====================================\n");
                printf("Nom: %s  \n", Re[i].nom);
                printf("Prénom: %s \n", Re[i].prenom);
                printf("====================================\n");
                printf("Numéro de téléphone: %s \n", Re[i].tele);
                printf("====================================\n");
                printf("CIN: %s \n", Re[i].cin);
                printf("====================================\n");
                printf("Statut: %s \n", Re[i].statut);
                printf("====================================\n");
                printf("Âge: %d \n", Re[i].age);
                printf("====================================\n");
                printf("ID: %d\n", Re[i].ID);
                return;
            }
        }
        printf("Aucune réservation trouvée pour l'ID %d.\n", id);
    }
    else if (choix == 2)
    {

        printf("Entrez le nom, prénom ou CIN: \n");
        scanf("%s", recherche);

        for (int i = 0; i < nbr; i++)
        {
            if (strcmp(Re[i].nom, recherche) == 0 || strcmp(Re[i].prenom, recherche) == 0 || strcmp(Re[i].cin, recherche) == 0)
            {
                printf("===========Il existe une réservation=====\n");
                printf("====================================\n");
                printf("DATE: %d/%d/%d \n", Re[i].date.jj, Re[i].date.mm, Re[i].date.nn);
                printf("====================================\n");
                printf("Nom: %s  \n", Re[i].nom);
                printf("Prénom: %s \n", Re[i].prenom);
                printf("====================================\n");
                printf("Numéro de téléphone: %s \n", Re[i].tele);
                printf("====================================\n");
                printf("CIN: %s \n", Re[i].cin);
                printf("====================================\n");
                printf("Statut: %s \n", Re[i].statut);
                printf("====================================\n");
                printf("Âge: %d \n", Re[i].age);
                printf("====================================\n");
                printf("ID: %d\n", Re[i].ID);
                return;
            }
        }
        printf("Aucune réservation trouvee pour %s.\n", recherche);
    }
    else
    {
        printf("Choix invalide. Veuillez entrer 1 ou 2.\n");
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
            scanf("%d", &Re[i].date.jj);

            printf("mois:  \n");
            scanf("%d", &Re[i].date.mm);

            printf("anne:  \n");
            scanf("%d", &Re[i].date.nn);
            printf("====================================\n");
            printf("entre le nom:  \n");
            scanf("%s", Re[i].nom);

            printf("entre le prenom:  \n");
            scanf("%s", Re[i].prenom);
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

            printf("============elle est existe le randiveux========== \n");

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

void tri_par_nom()
{
    reservation x;
    for (int i = 0; i < nbr - 1; i++)
    {
        for (int j = 0; j < nbr - i - 1; j++)
        {
            if (strcmp(Re[j].nom, Re[j + 1].nom) > 0)
            {
                x = Re[j];
                Re[j] = Re[j + 1];
                Re[j + 1] = x;
            }
        }
    }
    printf("=== Tri par nom effectué ===\n");
    afficher();
}

void tri_par_date()
{
    reservation x;
    for (int i = 0; i < nbr - 1; i++)
    {
        for (int j = 0; j < nbr - i - 1; j++)
        {

            long int js1 = Re[j].date.nn * 365 + Re[j].date.mm * 30 + Re[j].date.jj;
            long int js2 = Re[j + 1].date.nn * 365 + Re[j + 1].date.mm * 30 + Re[j + 1].date.jj;

            if (js1 > js2)
            {
                x = Re[j];
                Re[j] = Re[j + 1];
                Re[j + 1] = x;
            }
        }
    }
    printf("=== Tri par date effectué ===\n");
    afficher();
}

void tri_par_statut()
{
    reservation x;
    for (int i = 0; i < nbr - 1; i++)
    {
        for (int j = 0; j < nbr - i - 1; j++)
        {

            if (strcmp(Re[j].statut, Re[j + 1].statut) > 0)
            {
                x = Re[j];
                Re[j] = Re[j + 1];
                Re[j + 1] = x;
            }
        }
    }
    printf("=== Tri par statut effectué ===\n");
    afficher();
}

void trie()
{
    int choix = choix_de_tri();

    switch (choix)
    {
    case 1 :
        tri_par_nom();
        break;
    case 2 :
        tri_par_date();
        break;
    case 3:
        tri_par_statut();
        break;
    default:
        printf("Choix invalide. Veuillez entrer une valeur entre 1 et 3.\n");
    }
}

int choix_de_tri()
{
    int choix;
    printf("=====================================================================\n");
    printf("1)  | Tri par nom \n");
    printf("----|----------------------------------------------------------------\n");
    printf("2)  | Tri par date \n");
    printf("----|----------------------------------------------------------------\n");
    printf("3)  | Tri par statut \n");
    printf("====|=================================================================\n");
    printf("Entrez votre choix (1, 2 ou 3): \n");
    scanf("%d", &choix);
    return choix;
}

void moyenne_age()
{
    if (nbr == 0)
    {
        printf("Aucune reservation disponible pour calculer la moyenne d'age.\n");
        return;
    }

    int total_age = 0;
    for (int i = 0; i < nbr; i++)
    {
        total_age = total_age+Re[i].age;
    }
    int moyenne = total_age / nbr;
    printf("La moyenne d'age est: %d ans\n", moyenne);
}

void tatistique_par_statut(){
    int cont1=0,cont2=0,cont3=0,cont4;
for(int i=0;i<nbr;i++){
    if(strcmp(Re[i].statut,"validie")==0){
        cont1++;}
        else if(strcmp(Re[i].statut,"annule")==0){
            cont2++;}
        else if(strcmp(Re[i].statut,"rapotie")==0){
            cont3++;}
        else
            cont4++;}
        printf("le nombre de statut validie est :%d \n",cont1);

         printf("le nombre de statut annule est :%d \n",cont2);
        printf("le nombre de statut raportie est :%d \n",cont3);
         printf("le nombre de statut traite est :%d \n",cont4);

}

void statistique_de_age()
{
    int cont1 = 0, cont2 = 0, cont3 = 0;

    for (int i = 0; i < nbr; i++)
    {
        if (Re[i].age >= 0 && Re[i].age <= 18)
        {
            cont1++;
        }
        else if (Re[i].age >= 19 && Re[i].age <= 35)
        {
            cont2++;
        }
        else if (Re[i].age >= 36)
        {
            cont3++;
        }
    }

    printf("Nombre de patients par tranche d'age:\n");
    printf("0-18 ans: %d\n", cont1);
    printf("19-35 ans: %d\n", cont2);
    printf("36 ans et plus: %d\n", cont3);
}

void trie_par_status(){
    int valide = 0, non_valide = 0;
    for (int i = 0; i < nbr; i++)
    {
        if (strcmp(Re[i].statut, "valide") == 0)
        {
            valide++;
        }
        else
        {
            non_valide++;
        }
    }
    printf("Nombre de reservations valides: %d\n", valide);
    printf("Nombre de reservations non valides: %d\n", non_valide);
    return 0;
}

int statistique()
{
    statistique_par_status();
    printf("---------------------------- \n");
    moyenne_age();
    printf("---------------------------- \n");
    statistique_de_age();
}

int main()
{
    initial();
    while (1)
    {
        choix = menu();
        switch (choix)
        {
        case 1:
            afficher();
            break;
        case 2:
            ajouter();
            break;
        case 3:
            rechercher();
            break;
        case 4:
            modifie();
            break;
        case 5:
            supprimer();
            break;
        case 6:
            trie();
            break;
        case 7:
            statistique();
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("Choix invalide.\n");
        }
    }
    return 0;
}