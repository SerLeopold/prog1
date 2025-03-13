#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

// Függvények deklarációja
double get_double(const char* szoveg);
double gomb_felszin(double sugar);
double gomb_terfogat(double sugar);

int main() {
    double sugar = get_double("Add meg a gömb sugarát: ");
    
    // Felszín és térfogat kiszámítása és kiírása
    printf("A gömb felszíne: %.2f m\n", gomb_felszin(sugar));
    printf("A gömb térfogata: %.2f m^2\n", gomb_terfogat(sugar));
    
    return 0;
}

// Függvény a valós szám bekérésére
double get_double(const char* szoveg) {
    double szam;
    printf("%s", szoveg);
    scanf("%lf", &szam);
    return szam;
}

// Gömb felszínének kiszámítása
double gomb_felszin(double sugar) {
    return 4 * M_PI * sugar * sugar;
}

// Gömb térfogatának kiszámítása
double gomb_terfogat(double sugar) {
    return (4.0 / 3.0) * M_PI * pow(sugar, 3);
}