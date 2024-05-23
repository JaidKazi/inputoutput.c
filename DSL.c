#include <stdio.h>
#include <conio.h>

/* Global variable declaration */
int a[4], n, elem, pos;

/* Function prototype and definitions */
void create();
void deleteAndReplace();

int main() {
    create();  // Calling the create function
    deleteAndReplace();  // Calling the deleteAndReplace function
    return 0;
}

void create() {
    int i;
    printf("Enter the size of the array elements: ");
    scanf("%d", &n);

    printf("Enter the elements for the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Array created successfully with %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void deleteAndReplace() {
    int i;
    
    printf("Enter the position to delete: ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid position. Exiting...\n");
        return;
    }

    // Delete the element at the specified position
    elem = a[pos];
    for (i = pos; i < n - 1; i++) {
        a[i] = a[i + 1];
    }

    // Replace the position with the next array number
    a[n - 1] = elem;

    // Update the array size
    n--;

    // Print the updated array
    printf("Array after deletion and replacement:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
