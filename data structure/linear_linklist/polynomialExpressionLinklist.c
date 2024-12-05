#include <stdio.h>
#include <stdlib.h>

struct Node {
    int coeff;
    int pow;
    struct Node* next;
};

struct Node* create_node(int coeff, int pow) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->coeff = coeff;
    new_node->pow = pow;
    new_node->next = NULL;
    return new_node;
}

void insert_node(struct Node** start, int coeff, int pow) {
    struct Node* new_node = create_node(coeff, pow);
    if (*start == NULL) {
        *start = new_node;
        return;
    }
    struct Node* temp = *start;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}

void display_polynomial(struct Node* start) {
    struct Node* temp = start;
    while (temp != NULL) {
        printf("%dx^%d", temp->coeff, temp->pow);
        if (temp->next != NULL)
            printf(" + ");
        temp = temp->next;
    }
    printf("\n");
}

struct Node* add_polynomials(struct Node* poly1, struct Node* poly2) {
    struct Node* result = NULL;
    while (poly1 != NULL && poly2 != NULL) {
        if (poly1->pow > poly2->pow) {
            insert_node(&result, poly1->coeff, poly1->pow);
            poly1 = poly1->next;
        } else if (poly1->pow < poly2->pow) {
            insert_node(&result, poly2->coeff, poly2->pow);
            poly2 = poly2->next;
        } else {
            insert_node(&result, poly1->coeff + poly2->coeff, poly1->pow);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }
    while (poly1 != NULL) {
        insert_node(&result, poly1->coeff, poly1->pow);
        poly1 = poly1->next;
    }
    while (poly2 != NULL) {
        insert_node(&result, poly2->coeff, poly2->pow);
        poly2 = poly2->next;
    }
    return result;
}

int main() {
    struct Node* poly1 = NULL;
    struct Node* poly2 = NULL;
    struct Node* result = NULL;

    printf("Enter the first polynomial (coeff, pow) (Enter -1 -1 to stop):\n");
    int coeff, pow;
    while (1) {
        scanf("%d%d", &coeff, &pow);
        if (coeff == -1 && pow == -1)
            break;
        insert_node(&poly1, coeff, pow);
    }

    printf("Enter the second polynomial (coeff, pow) (Enter -1 -1 to stop):\n");
    while (1) {
        scanf("%d%d", &coeff, &pow);
        if (coeff == -1 && pow == -1)
            break;
        insert_node(&poly2, coeff, pow);
    }

    printf("\nFirst Polynomial: ");
    display_polynomial(poly1);

    printf("Second Polynomial: ");
    display_polynomial(poly2);

    result = add_polynomials(poly1, poly2);

    printf("Resultant Polynomial after Addition: ");
    display_polynomial(result);

    return 0;
}
