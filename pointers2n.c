#include <stdio.h>

void addNumbers(int *a, int *b, int *sum) {
    *sum = *a + *b;
}

int main() {
    int num1, num2, sum;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    addNumbers(&num1, &num2, &sum);
    printf("Sum: %d\n", sum);

    return 0;
}
