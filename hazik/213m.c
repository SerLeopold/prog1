#include <stdio.h>

int main()
{
    int input;
    int pozitiv;
    do
    {
        printf("Egesz szam (vege: 0): %d \n", input);
        scanf("%d", &input);

        if (input>0)
        {
            pozitiv++;
        }
    }
     while (input!=0);

    printf("Poztiv elemek szama: %d ", pozitiv);

    return 0;

}
