#include "prog1.h"
#include <stdio.h>


int contains_char(string s, char c) 
{
    for (int i = 0; s[i] != '\0'; i++) 
    {
        if (s[i] == c) 
        {
            return 1;
        }
    }
    return 0;
}

int main() {
    string s = "pentekreggeligyakorlat";
    char c = 'p';
    
    
    if (contains_char(s, c)) 
    {
        printf("A(z) '%c' benne van.\n", c);
    } 
    else 
    {
        printf("A(z) '%c' nincs benne.\n", c);
    }
    
    return 0;
}
