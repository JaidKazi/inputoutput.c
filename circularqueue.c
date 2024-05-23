#include <stdio.h>
#include <conio.h>

#define MAX 4
int ch, front = 0, rear = -1, count = 0;
char q[MAX], item;

void insert()
{
    if (count == MAX)
    {
        printf("\nQueue is Full");
    }
    else
    {
        printf("\nEnter the element to be inserted: ");
        scanf(" %c", &item);
        rear = (rear + 1) % MAX;
        q[rear] = item;
        count++;
    }
}

void del()
{
    if (count == 0)
    {
        printf("\nQueue is Empty");
    }
    else
    {
        item = q[front];
        printf("\nDeleted element is: %c", item);
        front = (front + 1) % MAX;
        count--;
    }
}

void display()
{
    int i, f = front, r = rear;
    if (count == 0)
    {
        printf("\nQueue is Empty");
    }
    else
    {
        printf("\nContents of Queue are:\n");
        for (i = 0; i < count; i++)
        {
            printf("%c ", q[f]);
            f = (f + 1) % MAX;
        }
    }
}

int main()
{
    while (1)
    {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insert();
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
        default:
            printf("\nInvalid choice");
        }
    }
}
