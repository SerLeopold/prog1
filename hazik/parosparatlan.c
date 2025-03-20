#include <stdio.h>

int is_even(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int is_odd(int n) {
    return !is_even(n);
}

int main() {
    int num;
    printf("Adj meg egy számot: ");
    scanf("%d", &num);

    if (is_even(num)) {
        printf("%d páros.\n", num);
    } else {
        printf("%d páratlan.\n", num);
    }
    
    return 0;
}
