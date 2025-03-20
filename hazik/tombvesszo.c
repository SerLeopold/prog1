#include <stdio.h>

void print_tomb(int arr[], int size) {
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

    print_tomb(arr, size);

    return 0;
}
