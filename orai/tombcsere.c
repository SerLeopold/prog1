#include <stdio.h>

void csere(const int meret, const int a[])
{
    for (int i=0; j=meret-1; i < j; i++, j--)
    {
        int tmp = a[i];
        a[i] = a [j];
        a[j] = tmp;
     }

}



int main()
{
    int meret = 6;
    int tomb[6] = {1, 2, 3, 4, 5, 6};
    
    for (int i =0 ; i < meret; i++)
    {
        printf("%d\n", tomb[i]);
    }
        printf("\n")

    csere(meret, tomb);

    for (int i= 0; i < meret; i++)
    {
        printf("\n");
    }
    return 0;


}