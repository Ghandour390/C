#include <stdio.h>
#include <stdlib.h>
void k(int N)
{
    if (N > 1)
    {
        k(N / 2);
    }
    printf("%d", N % 2);
}

int main()
{
    int N;
    printf("entre le nombre N :  ");
    scanf("%d", &N);
    printf("le nombre N en decimale est : ");
    if (N == 0)
    {
        printf("0");
    }
    else
    {
        k(N);
    }
    return 0;
}