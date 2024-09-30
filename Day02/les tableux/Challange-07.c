#include <stdio.h>

int main()
{
    int n;
    // printf("entre les nombre des elements n=  ");
    // scanf("%d", &n);
    int T[4]={8767,-75,87678,-1};
    int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     printf("ENTRE T[%d]=  ", i);
    //     scanf("%d", &T[i]);
    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (T[i] < T[j])
            {
                int k;
                k = T[i];
                T[i] = T[j];
                T[j] = k;

            }
        }
    }

for (int i = 0; i < n; i++)
{
    printf("T[%d]=%d \n", i, T[i]);
}
return 0;
}
