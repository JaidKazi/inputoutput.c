#include <stdio.h>

int main() {
    int a[] = {3, 4, 5, 6};
    int *ptr = a; 

   
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}

