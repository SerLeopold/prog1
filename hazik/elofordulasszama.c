#include <stdio.h>
#include <string.h>

// Az s sztringben a c karakter hányszor fordul elő?
int char_count(char s[], char c) 
{
    int count = 0;  
    int hossz = strlen(s);  
    for (int i = 0; i < hossz; i++)
    {
        if (s[i] == c) 
        {  
         count++;  
        }
    }

    return count;
}

int main() 
{
    printf("%d\n", char_count("Abba", 'b'));
    printf("%d\n", char_count("Abba", 'a'));
    printf("%d\n", char_count("Abba", 'A'));

    return 0;
}
