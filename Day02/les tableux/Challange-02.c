#include <stdio.h>

int main()
{

    int T[4];
    for (int i = 0; i < 5; i++)
    {
        printf("ENTRE :T[%d]=  ", i);
        scanf("%d", &T[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf(":T[%d]=%d  ", i, T[i]);
    }
    return 0;
}