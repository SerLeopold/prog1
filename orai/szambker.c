#include <stdio.h>
#include "prog1.h"

int get_int(string prompt)
{
    int szam;
    printf("%s", prompt);
    scanf("%d", szam);
    return szam;
}

int main()
{

    printf("%d\n",get_int("Egesz: "));
    return 0;
}

