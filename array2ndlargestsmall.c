#include <stdio.h>

void find_second_largest_smallest(int arr[], int n)
 {
    
    if (n < 2) {
        printf("Array should have at least two elements.\n");
        return;
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
              
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int second_smallest = arr[1];
    int second_largest = arr[n - 2];
    printf("Second smallest element: %d\n", second_smallest);
    printf("Second largest element: %d\n", second_largest);
}
int main() {
    int arr[] = {12, 4, 7, 1, 8, 10, 15, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    find_second_largest_smallest(arr, n);

    return 0;
}
