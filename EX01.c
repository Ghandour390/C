// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int age[] = {25, 22, 23, 20, 18, 18, 18, 25, 28, 22, 21, 22, 23, 24, 26, 21, 21, 21, 19, 21, 22, 22};
    int count;
    int length = sizeof(age) / sizeof(age[0]);
    int j, i, max = 0;
    int T[11];
    for (i = 0, j = 18; i < 11, j <= 28; i++, j++)
    {
        count = 0;
        for (int k = 0; k < length; k++)
        {
            if (j == age[k])
            {
                count++;
            }
        }
        printf("nombre de repitition de %d est%d \n", j, count);
        T[i] = count;
        if (max <= T[i])
        {
            max = T[i];
        }
        printf("le max=%d den repition", max);
    }

    return 0;
}