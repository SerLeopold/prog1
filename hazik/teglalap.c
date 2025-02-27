#include <stdio.h>
int main()
{
    int aoldal;
    int boldal;

    printf("A tegalalp kisebbik oldalanak hossza (cm-ben): ");
    scanf("%d", &aoldal);
    printf("A tegalalp nagyobbik oldalanak hossza (cm-ben): ");
    scanf("%d", &boldal);

    int kerulet = 2*(aoldal+boldal);
    int terulet = aoldal*boldal;

    printf("A teglalap kerulete: %d cm\n", kerulet);
    printf("A teglalap terulete: %d cm^2\n", terulet);

    return 0;

}
