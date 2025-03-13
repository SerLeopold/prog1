#include <stdio.h>

int beker_int(const char* uzenet);
int teglalap_kerulet(int hossz, int szelesseg);
int teglalap_terulet(int hossz, int szelesseg);

int main() {
    int hossz = beker_int("Add meg a téglalap hosszát: ");
    int szelesseg = beker_int("Add meg a téglalap szélességét: ");
    
    printf("Kerület: %d m\n", teglalap_kerulet(hossz, szelesseg));
    printf("Terület: %d m^2\n", teglalap_terulet(hossz, szelesseg));
    
    return 0;
}

int beker_int(const char* uzenet) {
    int szam;
    printf("%s", uzenet);
    scanf("%d", &szam);
    return szam;
}

int teglalap_kerulet(int hossz, int szelesseg) {
    return 2 * (hossz + szelesseg);
}

int teglalap_terulet(int hossz, int szelesseg) {
    return hossz * szelesseg;
}
