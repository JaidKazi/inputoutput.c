#include <stdio.h>
int getSum(int a, int b)
 {
    return a + b;
}
int getDifference(int a, int b) {
    return a - b;
}
int getProduct(int a, int b)
 {
    return a * b;
}
int main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Sum: %d\n", getSum(num1, num2));
    printf("Difference: %d\n", getDifference(num1, num2));
    printf("Product: %d\n", getProduct(num1, num2));

    return 0;
}
