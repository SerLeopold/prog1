#include <stdio.h>

int main()
{
    int input;
    int pozitiv;
    int negativ;
    do
    {
        printf("Egesz szam (vege: 0): %d \n", input);
        scanf("%d", &input);

        if (input>0)
        {
            pozitiv++;
        }
        else if (input<0)
        {
            negativ++;
        }
    }
     while (input!=0);

    printf("Poztiv elemek szama: %d\n", pozitiv);
    printf("A negativ elemek száma: %d\n ", negativ);

    return 0;

}
