#include <stdio.h>

int contains(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr[] = {5, 3, 8, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 3;

    if (contains(arr, size, value)) {
        printf("Az elem szerepel a tombben.\n");
    } else {
        printf("Az elem nem szerepel a tombben.\n");
    }

    return 0;
}
