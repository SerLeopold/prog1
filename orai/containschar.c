#include <stdio.h>
#include "prog1.h"
#include <string.h>

int contains_char(string s, char c)
{
    
    for (int i =0; i < strlen(s);  i++)
    {
        if(s[i] =c)
        {
            return 1;
        }
        else 
            return 0;
    }
    return -1;

}

int main()
{
    string s = "programozas";
    char c = 'o';

    int position = contains_char(s,c);
    printf("%d\n", position);


    return 0;
}

