#include <stdio.h>

int valid_triangle(double a, double b, double c) {
    return (a > 0 && b > 0 && c > 0) && 
           (a + b > c) && (a + c > b) && (b + c > a);
}

int main() {
    double a, b, c;
    
    printf("Adja meg a háromszög három oldalát: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if (valid_triangle(a, b, c)) {
        printf("Megrajzolható háromszög.\n");
    } else {
        printf("Nem rajzolható meg háromszög.\n");
    }
    
    return 0;
}