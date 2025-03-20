#include <stdio.h>

int max_keres(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {5, 3, 8, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("A legnagyobb elem: %d\n", max_keres(arr, size));

    return 0;
}
