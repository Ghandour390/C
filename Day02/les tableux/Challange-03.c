#include <stdio.h>

int main()
{
    int n, s = 0;
    printf("entre les nombre des elements n=  ");
    scanf("%d", &n);
    int T[n];
    for (int i = 0; i < n; i++)
    {
        printf("ENTRE :T[%d]=  ", i);
        scanf("%d", &T[i]);
        s = s + T[i];
    }
    printf("la somme des elements S=%d  ", s);
    return 0;
}