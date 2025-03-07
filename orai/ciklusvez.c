#include <stdio.h>

int main()
{   
    int poz_szam;
    
    while(1)
    {
        printf("Add meg egy egész számot: ");
        scanf("%d", &poz_szam);
        if (poz_szam >0)
        {
            break;
        }
        
    }
    
    printf("Egész szám: %d\n ", poz_szam);

    return 0;

}