#include <stdio.h>

int main()
{
    int magassag;
    printf("Add meg a háromszög magasságát: ");
    scanf("%d", &magassag);

    for (int i=0; i<=magassag; i++)
    {
        for (int j=0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }



        return 0;

}