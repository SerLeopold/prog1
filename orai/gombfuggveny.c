#include <stdio.h>
#include <math.h>
#define PI 3.1415


double get_double(const char* szoveg);
double gomb_felszin(double sugar);
double gomb_terfogat(double sugar);

int main() {
    double sugar = get_double("Add meg a gömb sugarát: ");
    
    
    printf("A gömb felszíne: %.2f m\n", gomb_felszin(sugar));
    printf("A gömb térfogata: %.2f m^2\n", gomb_terfogat(sugar));
    
    return 0;
}

double get_double(const char* szoveg) {
    double szam;
    printf("%s", szoveg);
    scanf("%lf", &szam);
    return szam;
}


double gomb_felszin(double sugar) {
    return 4 * PI * sugar * sugar;
}

double gomb_terfogat(double sugar) {
    return (4.0 / 3.0) * PI * sugar * sugar * sugar;
}