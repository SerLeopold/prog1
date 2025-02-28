#include <stdio.h>

int main ()
{
    int input;
    printf("Egész szám: ");
    scanf("%d", &input);

    if(input>0)
        {
        printf("Pozitiv\n");
        }
    else if (input<0)
        {     
        printf("Negativ\n");
        }
    else 
        {
        printf("Nulla\n");
        }

    return 0;
    
    
    }