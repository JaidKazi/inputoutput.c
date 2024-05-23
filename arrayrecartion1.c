#include <stdio.h>

void findMinMax(int arr[], int n, int *min, int *max) {
    // base case
    if (n == 1) {
        *min = *max = arr[0];
        return;
    }

    // recursive case
    int local_min, local_max;
    findMinMax(arr + 1, n - 1, &local_min, &local_max);

    *min = (arr[0] < local_min) ? arr[0] : local_min;
    *max = (arr[0] > local_max) ? arr[0] : local_max;
}

int main() {
    int arr[] = {20, 18, 16, 14, 12, 10, 8, 6, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min, max;

    findMinMax(arr, n, &min, &max);

    printf("Minimum element in the array is %d\n", min);
    printf("Maximum element in the array is %d\n", max);

    return 0;
}