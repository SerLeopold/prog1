#include <stdio.h>

int main()
{
    int i = 10;
    while (i<=1)
    if(i%2==0)
    {
        printf("%d\n", i);
        i--;
    }
    else i--;
    return 0;
}