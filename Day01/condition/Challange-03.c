#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int a, b;
    printf("entre le nombre a: ");
    scanf("%d", &a);
    printf("entre le nombre b: ");
    scanf("%d", &b);
    if (a != b)
    {
        printf("la some de a+b=%d", a + b);
    }
    else
    {
        printf("le trible de la somme a+b c'est: %d", 6 * a);
    }
    return 0;
}