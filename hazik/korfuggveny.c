#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int beker_int(const char* szoveg);
double kor_kerulet(int sugar);
double kor_terulet(int sugar);

int main() {
    int sugar = beker_int("Add meg a kör sugarát: ");
    
    printf("Kerület: %.2f m\n", kor_kerulet(sugar));
    printf("Terület: %.2f m^2\n", kor_terulet(sugar));
    
    return 0;
}

int beker_int(const char* szoveg) {
    int szam;
    printf("%s", szoveg);
    scanf("%d", &szam);
    return szam;
}

double kor_kerulet(int sugar) {
    return 2 * M_PI * sugar;
}

double kor_terulet(int sugar) {
    return M_PI * sugar * sugar;
}
