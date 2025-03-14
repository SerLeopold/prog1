#include <stdio.h>

void tomb_kiir(int meret, int szamok[])
{
    for (int i = 0; i < meret; i++)
    {
        printf("%d ", szamok[i]);
    }
    printf("\n");
}
int main()
{
    int meret = 10;
    int tomb[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    tomb_kiir(meret, tomb);


    return 0;
}
