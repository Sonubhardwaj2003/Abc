#include<stdio.h>
#include<stdlib.h>

// Define the structure for the node
struct node {
    int info;             // Value stored in the node
    struct node* next;    // Pointer to the next node
    struct node* prev;    // Pointer to the previous node
};

struct node* start = NULL;  // Start of the doubly linked list

// Function declarations
void add_at_beg();
void add_at_end();
void add_at_pos();
void delete_beg();
void delete_end();
void delete_pos();
void display();
void count();
void search();

// Main function
int main() {
    int choice = 0;
    while(choice != 8) {
        printf("\nChoose one option from the following list ...\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at a specific position\n");
        printf("4. Delete from beginning\n");
        printf("5. Delete from end\n");
        printf("6. Delete from a specific position\n");
        printf("7. Display\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: add_at_beg(); break;
            case 2: add_at_end(); break;
            case 3: add_at_pos(); break;
            case 4: delete_beg(); break;
            case 5: delete_end(); break;
            case 6: delete_pos(); break;
            case 7: display(); break;
            case 8: exit(0); break;
            default: printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

// Insert a node at the beginning
void add_at_beg() {
    struct node* ptr;
    int item;
    ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL) {
        printf("Memory cannot be allocated.\n");
        return;
    }
    printf("Enter value: ");
    scanf("%d", &item);
    ptr->info = item;
    ptr->next = start;
    ptr->prev = NULL;
    if(start != NULL) {
        start->prev = ptr;  // Link the previous node to the new node
    }
    start = ptr;
    printf("Node inserted at the beginning.\n");
    display();
}

// Insert a node at the end
void add_at_end() {
    struct node *ptr, *temp;
    int item;
    ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL) {
        printf("Memory cannot be allocated.\n");
        return;
    }
    printf("Enter value: ");
    scanf("%d", &item);
    ptr->info = item;
    ptr->next = NULL;
    if(start == NULL) {
        ptr->prev = NULL;
        start = ptr;
    } else {
        temp = start;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = ptr;
        ptr->prev = temp;  // Link the previous node to the new node
    }
    printf("Node inserted at the end.\n");
    display();
}

// Insert a node at a specific position
void add_at_pos() {
    int i, pos, item;
    struct node *ptr, *temp;
    ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL) {
        printf("Memory cannot be allocated.\n");
        return;
    }
    printf("Enter value: ");
    scanf("%d", &item);
    printf("Enter the position: ");
    scanf("%d", &pos);
    ptr->info = item;

    if(pos == 1) {
        ptr->next = start;
        ptr->prev = NULL;
        if(start != NULL) {
            start->prev = ptr;
        }
        start = ptr;
    } else {
        temp = start;
        for(i = 1; i < pos - 1; i++) {
            temp = temp->next;
            if(temp == NULL) {
                printf("Position out of bounds.\n");
                return;
            }
        }
        ptr->next = temp->next;
        if(temp->next != NULL) {
            temp->next->prev = ptr;  // Link the next node back to the new node
        }
        temp->next = ptr;
        ptr->prev = temp;
    }
    printf("Node inserted at position %d.\n", pos);
    display();
}

// Delete a node from the beginning
void delete_beg() {
    struct node* ptr;
    if(start == NULL) {
        printf("List is empty.\n");
        return;
    }
    ptr = start;
    start = ptr->next;
    if(start != NULL) {
        start->prev = NULL;
    }
    printf("Node with value %d deleted from the beginning.\n", ptr->info);
    free(ptr);
    display();
}

// Delete a node from the end
void delete_end() {
    struct node *temp;
    if(start == NULL) {
        printf("List is empty.\n");
        return;
    }
    temp = start;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    if(temp->prev != NULL) {
        temp->prev->next = NULL;
    } else {
        start = NULL;  // List has only one element
    }
    printf("Node with value %d deleted from the end.\n", temp->info);
    free(temp);
    display();
}

// Delete a node from a specific position
void delete_pos() {
    struct node *temp, *del;
    int pos, i;
    printf("Enter the position: ");
    scanf("%d", &pos);
    if(start == NULL) {
        printf("List is empty.\n");
        return;
    }
    temp = start;
    for(i = 1; i < pos; i++) {
        temp = temp->next;
        if(temp == NULL) {
            printf("Position out of bounds.\n");
            return;
        }
    }
    del = temp;
    if(del->prev != NULL) {
        del->prev->next = del->next;
    } else {
        start = del->next;  // Deleting the first node
    }
    if(del->next != NULL) {
        del->next->prev = del->prev;
    }
    printf("Node with value %d deleted from position %d.\n", del->info, pos);
    free(del);
    display();
}

// Display the list
void display() {
    struct node *ptr;
    if(start == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("List: ");
    ptr = start;
    while(ptr != NULL) {
        printf("%d <-> ", ptr->info);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

// Count the number of nodes in the list
void count() {
    struct node *ptr;
    int count = 0;
    ptr = start;
    while(ptr != NULL) {
        count++;
        ptr = ptr->next;
    }
    printf("Number of nodes: %d\n", count);
}

// Search for a value in the list
void search() {
    struct node *ptr;
    int target, count = 0;
    printf("Enter value to search: ");
    scanf("%d", &target);
    ptr = start;
    while(ptr != NULL) {
        count++;
        if(ptr->info == target) {
            printf("%d found at position %d.\n", target, count);
            return;
        }
        ptr = ptr->next;
    }
    printf("%d not found in the list.\n", target);
}
