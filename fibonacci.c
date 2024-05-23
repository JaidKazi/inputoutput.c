#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci Series up to %d terms: \n", n);

    for (i = 1; i <= n; i++)
    {
        if (i == 1) {
            printf("%d, ", first);
            continue;
        }
        if (i == 2) {
            printf("%d, ", second);
            continue;
        }

        next = first + second;
        first = second;
        second = next;

        if (i == n) {
            printf("%d\n", next);
        } else {
            printf("%d, ", next);
        }
    }

    return 0;
}

