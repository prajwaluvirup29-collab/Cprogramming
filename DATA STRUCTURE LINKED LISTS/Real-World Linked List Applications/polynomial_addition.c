#include <stdio.h>
#include <stdlib.h>

struct Node {
    int coeff;
    int power;
    struct Node* next;
};

struct Node* create(int c, int p) {
    struct Node* temp = malloc(sizeof(struct Node));
    temp->coeff = c;
    temp->power = p;
    temp->next = NULL;
    return temp;
}

struct Node* addPoly(struct Node* p1, struct Node* p2) {
    struct Node *result = NULL, *tail = NULL;

    while (p1 && p2) {
        struct Node* temp;

        if (p1->power > p2->power) {
            temp = create(p1->coeff, p1->power);
            p1 = p1->next;
        } else if (p2->power > p1->power) {
            temp = create(p2->coeff, p2->power);
            p2 = p2->next;
        } else {
            temp = create(p1->coeff + p2->coeff, p1->power);
            p1 = p1->next;
            p2 = p2->next;
        }

        if (!result)
            result = tail = temp;
        else {
            tail->next = temp;
            tail = temp;
        }
    }
    return result;
}

void display(struct Node* poly) {
    while (poly) {
        printf("%dx^%d + ", poly->coeff, poly->power);
        poly = poly->next;
    }
    printf("0\n");
}

int main() {
    struct Node* p1 = create(3, 2);
    p1->next = create(5, 1);

    struct Node* p2 = create(4, 2);
    p2->next = create(2, 1);

    struct Node* result = addPoly(p1, p2);

    display(result);

    return 0;
}