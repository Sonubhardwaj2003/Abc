#include <stdio.h>
#include <stdlib.h>

// Structure to create a node with data and the next pointer
struct node
{
    int info;
    struct node *next;
} *top, *ptr, *temp;

int count = 0;
// Push() operation on a  stack
void push(int data)
{
    if (top == NULL)
    {
        top = (struct node *)malloc(sizeof(struct node));
        top->info = data;
        top->next = NULL;
    }
    else
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->info = data;
        temp->next = top;
        top = temp;
    }
    count++;
    printf("Node is Inserted\n");
}

int pop()
{
    ptr = top;

    if (ptr == NULL)
    {
        printf("\nStack Underflow\n");
        return -1;
    }
    else
        ptr = ptr->next;
    int popped = top->info;
    free(top);
    top = ptr;
    count--;
    return popped;
}

void display()
{
    // Display the elements of the stack
    ptr = top;

    if (ptr == NULL)
    {
        printf("\nStack Underflow\n");
        return;
    }

    printf("The stack is \n");
    while (ptr != NULL)
    {
        printf("%d--->", ptr->info);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main()
{
    int choice, value;
    printf("\nImplementation of Stack using Linked List\n");
    while (choice!=4)
    {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the value to insert: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            printf("Popped element is :%d\n", pop());
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nWrong Choice\n");
        }
    }
}
