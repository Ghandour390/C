#include <stdio.h>

int main()
{
     char nom[30];
     char prenom[30];
     char email[30];
     int age;

     printf("entre le nom: ");
     scanf("%s", &nom);
     printf("entre le prenom: ");
     scanf("%s", &prenom);
     printf("entre le email: ");
     scanf("%s", &email);
     printf("entre l'age:       ");
     scanf("%d", &age);
     printf("nom %s \n", nom);
     printf("prenom %s \n", prenom);
     printf("email %s \n", email);
     printf("age:%d", age);
     return 0;
}