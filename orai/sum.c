#include <stdio.h>

int sum(const int meret, const int tomb[])
{
    int osszeg=0;
    for (int i = 0; i < meret ; i++)
    {
        osszeg += tomb[i];
    }
     return osszeg;
}

double average(const int meret, const int tomb[])
{
    int osszeg = sum (meret,tomb);
    double avg = (double) osszeg / (double) meret;
    
    return avg;
}


int main()
{
    int n = 10;
    int szamok[] = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    printf("%.2lf\n", average(n,szamok));

    int szamok2[] = {1, 2, 3, 4, 5, 6, 2342};
    printf("%.2lf\n", average(7,szamok2));

    int szamok3[] = {1, 3};
    printf("%.2lf\n", average(2,szamok3));
    return 0;
}