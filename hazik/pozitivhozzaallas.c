#include <stdio.h>
#include <stdlib.h>

void replace_negative_with_absolute(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            arr[i] = abs(arr[i]);
        }
    }
}

void print_array(int arr[], int size) {
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
    print_array(arr, size);

    replace_negative_with_absolute(arr, size);

    printf("Tomb masodik kiirasa: ");
    print_array(arr, size);

    return 0;
}
