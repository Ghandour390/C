#include <stdio.h>
#include <string.h>
int main()
{
    char C[30];
    puts("entre le chaine de caracter: ");
      fgets(C, sizeof(C), stdin);
    

    puts("le chaine de caractere est : ");
    
        puts(C);
    

    return 0;
}