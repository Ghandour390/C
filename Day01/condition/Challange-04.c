#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    float a, b, c, x, x1, X2, delta;
    printf("entre a:  ");
    scanf("%f", &a);
    printf("entre b:  ");
    scanf("%f", &b);
    printf("entre c:  ");
    scanf("%f", &c);
    delta = b * b - 4 * a * c;
    if (delta < 0)
        printf("l'equoitoin n'est pas admis un solution dans IR");
    else if (delta == 0)
        printf("l'equoitoin admis un solution dans IR x= %0.2f ", ((-b) / (2 * a)));
    else
        printf("l'equoitoin admis deux solutions x1=%0.2f et x2=%0.2f dans IR", (-b - sqrt(delta)) / (2 * a), (-b + sqrt(delta)) / (2 * a));
    return 0;
}