#include <stdio.h>

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
    int arr[] = {4, 7, 34, 23, 67};
    int size = sizeof(arr) / sizeof(arr[0]);

    tomb_kiir(arr, size);

    return 0;
}
