#include <stdio.h>

int main()
{
    int input;
    int osszeg=0;
    do
    {
        printf("Egesz szam (vege: 0): %d \n", input);
        scanf("%d", &input);

        if (input!=0)
        {
            osszeg+=input;
        }
    }
     while (input!=0);

    printf("Elemek osszege: %d ", osszeg);

    return 0;

}
