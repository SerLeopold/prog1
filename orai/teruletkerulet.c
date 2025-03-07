#include <stdio.h>
int get_int();
int get_positive_int();
int kocka();

int main(){
    if (get_positive_int > 0)
    {
    printf("Szám: %d\n", get_int());
    }
    return 0;
}

int get_int()
{
    int input;
    printf("Adj meg egy egész számot: ");
    scanf("%d", &input);
}

int get_positive_int()
{
    int n=get_int();
    while (n<=0)
    {
        n=get_int();
    }
        return 0;
}

int kerulet(int oldal)
{
    return 4 * oldal;
}

int terulet(int oldal)
{
    return oldal*oldal;
}
