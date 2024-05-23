#include <stdio.h>
void modifyArray(int *arr, int size) {
    for (int i = 0; i < size; i++)
     {
      (*arr) *= 2;
        arr++;
    }
}
int main() {
    int myArray[5];
    printf("Enter 5 integers for the array:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &myArray[i]);
    }
    modifyArray(myArray, 5);
    printf("Modified Array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", myArray[i]);
    }

    return 0;
}
