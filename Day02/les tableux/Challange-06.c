#include <stdio.h>

int main()
{
    int n, a;
    printf("entre les nombre des elements n=  ");
    scanf("%d", &n);
    printf("entre le factour de multiblication a=  ");
    scanf("%d", &a);
    int T[n];
    for (int i = 0; i < n; i++)
    {
        printf("ENTRE T[%d]=  \n", i);
        scanf("%d", &T[i]);
        T[i] = T[i] * a;
    }
    for (int i = 0; i < n; i++)
    {
        printf("T[%d]=%d  ", i, T[i]);
    }
    return 0;
}