#include <stdio.h>
int sumArrayRecursive(int *arr, int size)
 {
    if (size == 1) {
        return arr[0];
    } else
     {
        return arr[0] + sumArrayRecursive(arr + 1, size - 1);
    }
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);t
    int result = sumArrayRecursive(arr, size);
    printf("Sum of the array elements (using recursion): %d\n", result);

    return 0;
}
