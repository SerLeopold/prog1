#include <stdio.h>
#include "prog1.h"
#include <string.h>

int is_palindrome(string s)
{
    for (int i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    string nev = "anna";
    printf("%d\n", is_palindrome(nev));



    return 0;
}
