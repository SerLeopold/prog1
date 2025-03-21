#include <stdio.h>
#include "prog1.h"
#include <string.h>

int karakter_szama(string s)
{
    int counter = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        counter += 1; 
    }
    return counter;
}



int main()
{
    string sztring = "Hello";
    printf("%d\n", karakter_szama(sztring));
    printf("%d\n", (int)strlen(sztring));

    return 0;
}