#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Employee {
    int ssn;
    char name[50];
    char dept[50];
    char designation[50];
    double sal;
    char phno[15];
    struct Employee *prev;
    struct Employee *next;
} Employee;

Employee* createDLL(int n) {
    Employee *head = NULL, *tail = NULL, *newEmployee;
    int i;

    for (i = 0; i < n; i++) {
        newEmployee = (Employee*)malloc(sizeof(Employee));

        printf("Enter SSN: ");
        scanf("%d", &(newEmployee->ssn));

        printf("Enter Name: ");
        scanf("%s", newEmployee->name);

        printf("Enter Dept: ");
        scanf("%s", newEmployee->dept);

        printf("Enter Designation: ");
        scanf("%s", newEmployee->designation);

        printf("Enter Salary: ");
        scanf("%lf", &(newEmployee->sal));

        printf("Enter Phone Number: ");
        scanf("%s", newEmployee->phno);

        newEmployee->prev = NULL;
        newEmployee->next = NULL;

        if (head == NULL) {
            head = newEmployee;
            tail = newEmployee;
        } else {
            tail->next = newEmployee;
            newEmployee->prev = tail;
            tail = newEmployee;
        }
    }

    return head;
}

void displayDLL(Employee *head) {
    Employee *current = head;
    int count = 0;

    while (current != NULL) {
        count++;
        printf("\nEmployee %d:\n", count);
        printf("SSN: %d\n", current->ssn);
        printf("Name: %s\n", current->name);
        printf("Dept: %s\n", current->dept);
        printf("Designation: %s\n", current->designation);
        printf("Salary: %.2lf\n", current->sal);
        printf("Phone Number: %s\n", current->phno);
        current = current->next;
    }

    printf("\nNumber of nodes in DLL: %d\n", count);
}

Employee* insertEnd(Employee *head, Employee *newEmployee) {
    Employee *current = head;

    if (head == NULL) {
        return newEmployee;
    }

    while (current->next != NULL) {
        current = current->next;
    }

    current->next = newEmployee;
    newEmployee->prev = current;

    return head;
}

Employee* deleteEnd(Employee *head) {
    Employee *current = head;

    if (head == NULL) {
        return NULL;
    }

    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    while (current->next->next != NULL) {
        current = current->next;
    }

    free(current->next);
    current->next = NULL;

    return head;
}

Employee* insertFront(Employee *head, Employee *newEmployee) {
    if (head == NULL) {
        return newEmployee;
    }

    newEmployee->next = head;
    head->prev = newEmployee;

    return newEmployee;
}

Employee* deleteFront(Employee *head) {
    Employee *temp = head;

    if (head == NULL) {
        return NULL;
    }

    if (head->next == NULL) {
        free(head);
        return NULL;
    }

    head = head->next;
    head->prev = NULL;
    free(temp);

    return head;
}

int main() {
    int n;
    Employee *head, *newEmployee;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    head = createDLL(n);

    printf("\nDLL Created Successfully\n");

    displayDLL(head);

    newEmployee = (Employee*)malloc(sizeof(Employee));

    printf("\nEnter SSN: ");
    scanf("%d", &(newEmployee->ssn));

    printf("Enter Name: ");
    scanf("%s", newEmployee->name);

    printf("Enter Dept: ");
    scanf("%s", newEmployee->dept);

    printf("Enter Designation: ");
    scanf("%s", newEmployee->designation);

    printf("Enter Salary: ");
    scanf("%lf", &(newEmployee->sal));

    printf("Enter Phone Number: ");
    scanf("%s", newEmployee->phno);

    head = insertEnd(head, newEmployee);

    printf("\nDLL After Inserting at End:\n");

    displayDLL(head);

    head = deleteEnd(head);

    printf("\nDLL After Deleting from End:\n");

    displayDLL(head);

    newEmployee = (Employee*)malloc(sizeof(Employee));

    printf("\nEnter SSN: ");
    scanf("%d", &(newEmployee->ssn));

    printf("Enter Name: ");
    scanf("%s", newEmployee->name);

    printf("Enter Dept: ");
    scanf("%s", newEmployee->dept);

    printf("Enter Designation: ");
    scanf("%s", newEmployee->designation);

    printf("Enter Salary: ");
    scanf("%lf", &(newEmployee->sal));

    printf("Enter Phone Number: ");
    scanf("%s", newEmployee->phno);

    head = insertFront(head, newEmployee);

    printf("\nDLL After Inserting at Front:\n");

    displayDLL(head);

    head = deleteFront(head);

    printf("\nDLL After Deleting from Front:\n");

    displayDLL(head);

    return 0;
}