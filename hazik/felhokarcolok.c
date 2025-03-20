#include <stdio.h>
#include <stdlib.h>

int calculate_difference_sum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size - 1; i++) {
        sum += abs(arr[i] - arr[i + 1]);
    }
    return sum;
}

int main() {
    int num = 21024;
    int arr[5];
    int size = 0;

    while (num > 0) {
        arr[size++] = num % 10;
        num /= 10;
    }

    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }

    int result = calculate_difference_sum(arr, size);

    printf("A szomszedos felhokarcolok magassagkulonbsegenek osszege: %d\n", result);

    return 0;
}
