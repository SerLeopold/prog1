#include <stdio.h>

int main()
{
    int szam;
    printf("Add meg egy tetszőleges számot: ");
    scanf("%d", &szam);

    for (int i=szam; i>=1; i--)
    {
        if (i%2!=0)
        {
        printf ("%d\n", i);
        }
    }

    return 0;
}
