#include <stdio.h>s
int find_maximum(int a, int b, int c) {
    int max = (a > b) ? a : b;
    max = (max > c) ? max : c;
    return max;
}
int find_minimum(int a, int b, int c) {
    int min = (a < b) ? a : b;
    min = (min < c) ? min : c;
    return min;
}

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int max = find_maximum(num1, num2, num3);
    int min = find_minimum(num1, num2, num3);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}
