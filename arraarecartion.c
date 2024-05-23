#include <stdio.h>


int findMax(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    } else {
        int max = findMax(arr, n - 1);
        return (arr[n - 1] > max) ? arr[n - 1] : max;
    }
}


int findMin(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    } else {
        int min = findMin(arr, n - 1);
        return (arr[n - 1] < min) ? arr[n - 1] : min;
    }
}

int main() {
    int arr[] = {12, 45, 67, 3, 98, 23, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = findMax(arr, n);
    int min = findMin(arr, n);

    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
