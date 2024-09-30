#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("entre le nombre n: ");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("le nombre n=%d positif", n);
    }
    else if (n < 0)
    {
        printf("le nombre n=%d est negatif", n);
    }
    else
    {
        printf("le nombre n=%d est nul", n);
    }
    return 0;
}