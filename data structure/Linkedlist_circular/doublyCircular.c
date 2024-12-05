#include <stdio.h>
#include <stdlib.h>

// Define structure for a node in the doubly circular linked list
struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = newNode;  // Points to itself, as it's a circular linked list
    newNode->prev = newNode;
    return newNode;
}

int main() {
    struct Node *head = NULL;  // Initialize the list as empty
    struct Node *temp = NULL;
    int choice, value;

    while (1) {
        printf("\nDoubly Circular Linked List Operations:\n");
        printf("1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Delete from the beginning\n");
        printf("4. Delete from the end\n");
        printf("5. Traverse the list\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Insert at the beginning
                printf("Enter value to insert at the beginning: ");
                scanf("%d", &value);
                temp = createNode(value);
                if (head == NULL) {
                    head = temp;
                } else {
                    temp->next = head;
                    temp->prev = head->prev;
                    head->prev->next = temp;
                    head->prev = temp;
                    head = temp;  // Move head to new node
                }
                printf("Node inserted at the beginning.\n");
                break;

            case 2: // Insert at the end
                printf("Enter value to insert at the end: ");
                scanf("%d", &value);
                temp = createNode(value);
                if (head == NULL) {
                    head = temp;
                } else {
                    temp->next = head;
                    temp->prev = head->prev;
                    head->prev->next = temp;
                    head->prev = temp;
                }
                printf("Node inserted at the end.\n");
                break;

            case 3: // Delete from the beginning
                if (head == NULL) {
                    printf("The list is empty.\n");
                } else if (head->next == head) {
                    free(head);
                    head = NULL;
                    printf("Node deleted from the beginning. The list is now empty.\n");
                } else {
                    struct Node *tempDelete = head;
                    head->prev->next = head->next;
                    head->next->prev = head->prev;
                    head = head->next;
                    free(tempDelete);
                    printf("Node deleted from the beginning.\n");
                }
                break;

            case 4: // Delete from the end
                if (head == NULL) {
                    printf("The list is empty.\n");
                } else if (head->next == head) {
                    free(head);
                    head = NULL;
                    printf("Node deleted from the end. The list is now empty.\n");
                } else {
                    struct Node *tempDelete = head->prev;
                    head->prev = tempDelete->prev;
                    tempDelete->prev->next = head;
                    free(tempDelete);
                    printf("Node deleted from the end.\n");
                }
                break;

            case 5: // Traverse the list
                if (head == NULL) {
                    printf("The list is empty.\n");
                } else {
                    struct Node *tempTraverse = head;
                    printf("List contents: ");
                    do {
                        printf("%d ", tempTraverse->data);
                        tempTraverse = tempTraverse->next;
                    } while (tempTraverse != head);
                    printf("\n");
                }
                break;

            case 6: // Exit
                printf("Exiting the program.\n");
                return 0;

            default:
                printf("Invalid choice, please try again.\n");
        }
    }
    
    return 0;
}
