#include <stdio.h>

int main()

{   
    printf("While\n");
    int i=0;
    while (i<5)
    {
        printf("Hello!\n");
        i++;
    }

    printf("For\n");
    for (int j=0; j<5; j++)
    {
        printf("Hello!\n");
    }
    return 0;
}