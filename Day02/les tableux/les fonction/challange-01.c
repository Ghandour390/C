#include <stdio.h>

struct Livre {
    char titre[100];
    char auteur[100];
    float prix;
    int quantite;
};

struct Livre livres[100];
int nombreLivres = 0;

void lireChaine(char *chaine, int taille) {
    int i = 0;
    char c;
    while (i < taille - 1 && (c = getchar()) != '\n') {
        chaine[i++] = c;
    }
    chaine[i] = '\0';
}

void ajouterLivres() {
    int n;
    printf("Combien de livres voulez-vous ajouter ? ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        printf("Entrez les détails du livre numéro %d:\n", i + 1);
        printf("Titre: ");
        lireChaine(livres[nombreLivres].titre, 100);
        printf("Auteur: ");
        lireChaine(livres[nombreLivres].auteur, 100);
        printf("Prix: ");
        scanf("%f", &livres[nombreLivres].prix);
        printf("Quantité: ");
        scanf("%d", &livres[nombreLivres].quantite);
        getchar(); // pour enlever le '\n' restant
        nombreLivres++;
    }
}

void afficherLivres() {
    printf("Détails des livres:\n");
    for (int i = 0; i < nombreLivres; i++) {
        printf("Livre %d:\n", i + 1);
        printf("Titre: %s\n", livres[i].titre);
        printf("Auteur: %s\n", livres[i].auteur);
        printf("Prix: %.2f DH\n", livres[i].prix);
        printf("Quantité: %d\n", livres[i].quantite);
        printf("------------------------\n");
    }
}

void rechercherLivre() {
    char auteurRecherche[100];
    printf("Entrez le nom de l'auteur: ");
    getchar(); // pour enlever le '\n' restant
    lireChaine(auteurRecherche, 100);

    int trouve = 0;
    for (int i = 0; i < nombreLivres; i++) {
        if (strcmp(livres[i].auteur, auteurRecherche) == 0) {
            printf("Titre: %s, Prix: %.2f DH\n", livres[i].titre, livres[i].prix);
            trouve = 1;
        }
    }

    if (!trouve) {
        printf("Aucun livre trouvé pour cet auteur.\n");
    }
}

void nombreTotalLivres() {
    printf("Le nombre total de livres en stock est: %d\n", nombreLivres);
}

int main() {
    int choix;
    do {
        printf("------------------------------------------\n");
        printf("1. Ajouter des livres\n");
        printf("2. Afficher les détails des livres\n");
        printf("3. Rechercher un livre par auteur\n");
        printf("4. Afficher le nombre total de livres en stock\n");
        printf("5. Quitter\n");
        printf("------------------------------------------\n");
        printf("Entrez votre choix: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouterLivres();
                break;
            case 2:
                afficherLivres();
                break;
            case 3:
                rechercherLivre();
                break;
            case 4:
                nombreTotalLivres();
                break;
            case 5:
                printf("Au revoir !\n");
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (choix != 5);

    return 0;
}
