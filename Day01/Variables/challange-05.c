#include <stdio.h>

int main()
{
    float C;
    printf("entre la temperature en degre C:  ");
    scanf("%f", &C);
    if (C < 0)
    {
        printf("etat de matier est solide");
    }
    else if (0 <= C < 100)
    {
        printf("etat de leau est liquide");
    }
    else
        printf("etat de leau est vabeur");
    return 0;
}