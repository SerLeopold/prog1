#include <stdio.h>

int main() {
    char a = 'B'-'A';
    char b = a+a;
    char c = b+b+b+b+b;
    int d = (c*c)*(b*c)+(c*b)+(a+a+a+a+a);
    printf("%d\n", d);
    return 0;
}
