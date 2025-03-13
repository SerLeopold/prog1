#include <stdio.h>

int main()
{
    int magassag;
    printf("Add meg a háromszög magasságát: ");
    scanf("%d", &magassag);

    for (int i=1; i<=magassag; i++)
        {
            for (int j=0; j < magassag - i; j++)
                {
                    printf(" ");
                }
            for (int j=0; j < i; j++)
            {
                printf("#");
            }

            printf("  ");

            for (int j = 0; j< i; j++)
            {
                printf("#");
            }
            printf("\n");
        }
    return 0;
}