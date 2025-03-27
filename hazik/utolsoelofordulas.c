#include <stdio.h>
#include <string.h>

// Az s alapsztringben keressük a c karakter utolsó előfordulásának a helyét.
// Visszatérési érték: a c utolsó előfordulásának az indexe az s-ben.
// Ha nincs benne: -1 a visszatérési érték.
int rfind_char(char s[], char c)
{
    int length = strlen(s);
    for (int i = length - 1; i >= 0; i--) 
    {
        if (s[i] == c) 
        {
            return i;
        }
    }
    return -1; 
}

int main() 
{
    printf("%d\n", rfind_char("Abba", 'b'));  
    printf("%d\n", rfind_char("Abba", 'a')); 
    printf("%d\n", rfind_char("Abba", 'x')); 
    printf("%d\n", rfind_char("Aladar", 'A'));

    return 0;
}
