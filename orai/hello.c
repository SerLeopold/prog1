#include <stdio.h>

void hello(const int szam)
{
    for (int i = 0; i < szam; i++)
    {
        printf("Hello ");
    }
    printf("\n");
}
int main()
{
    hello(5);
    
    return 0;
}