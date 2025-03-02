#include <stdio.h>

int main()
{
    int szam;
    for (int i=0; i<1000; i++)
    {
        if (i%3==0 || i%5==0)
        {
            szam+=i;
        }
    }

    printf("Az 1000-nél kisebb 3-mal vagy 5-el osztható számok összege: %d\n", szam );

    return 0;
}
