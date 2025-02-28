#include <stdio.h>

int main()
{
    int i=0;
    int szam=7;
    int bekert=0;
    printf("Adj meg egy pozitiv egeszet: ");
    scanf("%d", &bekert);
    while (bekert!=szam)
        {
        printf("Adj meg egy pozitiv egeszet: ");
        scanf("%d", &bekert);
        }
    printf("A pozitiv egesz: %d ", szam );

    return 0;
}


