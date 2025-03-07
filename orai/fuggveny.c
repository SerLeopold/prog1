#include <stdio.h>
int my_abs(int n);

int main(){

    int number=-7;
    printf("Szám: %d\n", number);
    printf("my_abs(number): %d\n", my_abs(number));

    return 0;
}

int my_abs(int n)
{
    if (n>0)
    {
        return n;
    }
    
    return -n;
}