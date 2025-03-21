#include <stdio.h>
#include "prog1.h"

int main()
{
    string nev;
    printf("Add meg a neved: ");
    nev = get_string("");

    printf("%s\n", nev);

    return 0;
}
