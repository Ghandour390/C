#include <stdio.h>

int main()
{
    int n, max = 0;
    printf("entre les nombre des elements n=  ");
    scanf("%d", &n);
    int T[n];
    for (int i = 0; i < n; i++)
    {
        printf("ENTRE :T[%d]=  ", i);
        scanf("%d", &T[i]);
        if (max <= T[i])
        {
            max = T[i];
        }
    }
    printf("le max de tableau max=%d  ", max);
    return 0;
}