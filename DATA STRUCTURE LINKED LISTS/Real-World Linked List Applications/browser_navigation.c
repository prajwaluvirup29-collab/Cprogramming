#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char url[100];
    struct Node *prev, *next;
};

struct Node* current = NULL;

void visit(char url[]) {
    struct Node* temp = malloc(sizeof(struct Node));
    strcpy(temp->url, url);
    temp->next = NULL;
    temp->prev = current;

    if (current)
        current->next = temp;

    current = temp;
}

void back() {
    if (current && current->prev)
        current = current->prev;
}

void forward() {
    if (current && current->next)
        current = current->next;
}

void show() {
    if (current)
        printf("Current Page: %s\n", current->url);
}

int main() {
    visit("google.com");
    visit("openai.com");
    visit("github.com");

    back();
    show();

    forward();
    show();

    return 0;
}