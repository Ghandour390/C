#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char titre[100][4];
    char auteur[100][4];
    float prix[100];
    int quantite[100];

    int choix, i, j, n = 0;
    char a[100];

    do {
        printf("----------------------------------------------------------------\n");
        printf("1. Ajouter des livres\n");
        printf("2. Afficher les details des livres\n");
        printf("3. Rechercher un livre par auteur\n");
        printf("4. Afficher le nombre total de livres en stock\n");
        printf("5. Supprimer un livre\n");
        printf("6. Quitter\n");
        printf("-------------------------------------------------------------------\n");
        printf("Saisissez votre choix: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("Combien de livres voulez-vous ajouter ? ");
                int nbLivres;
                scanf("%d", &nbLivres);

                for (i = n; i < n + nbLivres; i++) {
                    printf("------------------------------------------------------------------\n");
                    printf("Entrez les détails du livre numéro %d:\n", i + 1);
                    printf("Titre: ");
                    scanf("%s", titre[i]);

                    printf("Auteur: ");
                    scanf("%s", auteur[i]);

                    printf("Prix: ");
                    scanf("%f", &prix[i]);

                    printf("Quantité: ");
                    scanf("%d", &quantite[i]);
                }
                n += nbLivres;
                  printf("------------------------------------------------------------------\n");
                break;

            case 2:
                if (n == 0) {
                    printf("Aucun livre disponible.\n");
                } else {
                    for (i = 0; i < n; i++) {
                        printf("------------------------------------------------------------------\n");
                        printf("Détails du livre numéro %d:\n", i + 1);
                        printf("Titre: %s, Auteur: %s, Prix: %.2f DH, Quantité: %d\n", titre[i], auteur[i], prix[i], quantite[i]);
                        printf("------------------------------------------------------------------\n");
                    }
                }
                break;

            case 3:
                printf("Entrez le nom de l'auteur: ");
                scanf("%s", a);

                for (i = 0; i < n; i++) {
                    if (strcmp(auteur[i], a) == 0) {
                        printf("Titre: %s, Prix: %.2f DH\n", titre[i], prix[i]);
                    }
                }
                break;

            case 4:
                printf("Le nombre total de livres en stock est: %d\n", n);
                break;

            case 5:
                if (n == 0) {
                    printf("Aucun livre à supprimer.\n");
                } else {
                    int casse;
                    printf("Entrez le numéro du livre à supprimer (1 a %d): ", n);
                    scanf("%d", &casse);
                    casse--;

                    if (casse >= 0 && casse < n) {
                        for (j = casse; j < n - 1; j++) {
                            strcpy(titre[j], titre[j + 1]);
                            strcpy(auteur[j], auteur[j + 1]);
                            prix[j] = prix[j + 1];
                            quantite[j] = quantite[j + 1];
                        }
                        n--;
                        printf("Le livre numéro %d a été supprimé avec succès.\n", casse + 1);
                    } else {
                        printf("Numéro de livre invalide.\n");
                    }
                }
                break;

            case 6:
                printf("Au revoir !\n");
                break;

            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (choix != 6);

    return 0;
}
