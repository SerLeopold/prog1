#include <stdio.h>
#include <stdlib.h>

void negbol_abszolut(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            arr[i] = abs(arr[i]);
        }
    }
}

void tomb_kiir(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (i != size - 1) {
            printf("%d, ", arr[i]);
        } else {
            printf("%d\n", arr[i]);
        }
    }
}

int main() {
    int arr[] = {-4, 7, -34, 23, -67};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Tomb elso kiirasa: ");
    tomb_kiir(arr, size);

    negbol_abszolut(arr, size);

    printf("Tomb masodik kiirasa: ");
    tomb_kiir(arr, size);

    return 0;
}
