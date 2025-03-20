#include <stdio.h>

int index(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {5, 3, 8, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value = 3;

    int result = index(arr, size, value);
    
    if (result != -1) {
        printf("Az elem megtalálható a(z) %d. indexen.\n", result);
    } else {
        printf("Az elem nem szerepel a tombben.\n");
    }

    return 0;
}
