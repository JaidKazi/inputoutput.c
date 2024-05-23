#include <stdio.h>
#include <stdlib.h> // Include stdlib for malloc and free

struct student {
    char usn[10];
    char name[30];
    char branch[5];
    int sem;
    char phno[10];
    struct student *next; // Self referential pointer
};

typedef struct student NODE;

NODE *createNode() {
    NODE *newNode = (NODE *)malloc(sizeof(NODE));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    printf("Enter USN, Name, Branch, Semester, and Phone Number: ");
    scanf("%s %s %s %d %s", newNode->usn, newNode->name, newNode->branch, &newNode->sem, newNode->phno);
    newNode->next = NULL;
    return newNode;
}

void display(NODE *head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("USN\tName\tBranch\tSemester\tPhone Number\n");
    while (head != NULL) {
        printf("%s\t%s\t%s\t%d\t\t%s\n", head->usn, head->name, head->branch, head->sem, head->phno);
        head = head->next;
    }
}

NODE *insertFront(NODE *head) {
    NODE *newNode = createNode();
    newNode->next = head;
    return newNode;
}

NODE *deleteFront(NODE *head) {
    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return NULL;
    }
    NODE *temp = head;
    head = head->next;
    free(temp);
    return head;
}

int main() {
    NODE *head = NULL;
    int choice;
    do {
        printf("\n1. Insert Front\n2. Delete Front\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                head = insertFront(head);
                break;
            case 2:
                head = deleteFront(head);
                break;
            case 3:
                display(head);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);

    // Free memory before exiting
    while (head != NULL) {
        NODE *temp = head;
        head = head->next;
        free(temp);
    }
    return 0;
}
