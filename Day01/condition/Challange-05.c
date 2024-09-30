#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    float annes, mois, j, min, h, s;
    printf("entre le nombre des annes:  ");
    scanf("%f", &annes);
    mois = annes * 12;
    j = annes * 12 * 30;
    h = j * 24;
    min = h * 60;
    s = min * 60;
    printf("%0.2f annees=%0.2fmois\n", annes, mois);
    printf("%0.2f annees=%0.2fjours\n", annes, j);
    printf("%0.2f annees=%0.2fhours\n", annes, h);
    printf("%0.2f annees=%0.2fminites\n", annes, min);
    printf("%0.2f annees=%0.2fminites\n", annes, s);
    return 0;
}