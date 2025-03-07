#include <stdio.h>
int get_int();

int main(){

   
    printf("Szám: %d\n", get_int());
    return 0;
}

int get_int()
{
    int input;
    printf("Adj meg egy egész számot: ");
    scanf("%d", &input);
}