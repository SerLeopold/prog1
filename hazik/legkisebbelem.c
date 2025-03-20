#include <stdio.h>

int find_min(int arr[], int size) {
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

    printf("A legkisebb elem: %d\n", find_min(arr, size));
    
    return 0;
}
