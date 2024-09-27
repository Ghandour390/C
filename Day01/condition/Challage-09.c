#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{ 
    char caractere;

printf("entre le caractere:  ");
scanf("%s",&caractere);

 if((caractere>=64 && caractere<=90) || (caractere>=97 && caractere<=122)) 
     {
    if(65<=caractere && caractere<=90)
     printf("le caractere est majuscul");
else
printf("le caractere est non majuscul");
 } else 
 printf("non caractere");
    return 0;
}