#include <stdio.h>

int min_keres(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[] = {5, 3, 8, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("A legkisebb elem: %d\n", min_keres(arr, size));
    
    return 0;
}
