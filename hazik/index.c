#include <stdio.h>

int index_keres(const int *arr, int size, int elem) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == elem) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {3, 5, 7, 9, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    int elem = 7;
    int index = index_keres(arr, size, elem);
    
    if (index != -1) {
        printf("Az elem %d a(z) %d. indexen található.\n", elem, index);
    } else {
        printf("Az elem %d nincs a tömbben.\n", elem);
    }
    
    return 0;
}

