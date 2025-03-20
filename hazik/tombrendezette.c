#include <stdio.h>

int rendezett(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (rendezettt(arr, size)) {
        printf("A tomb rendezett.\n");
    } else {
        printf("A tomb nem rendezett.\n");
    }

    return 0;
}
