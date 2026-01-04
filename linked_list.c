#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

int main() {
    Node *n1 = malloc(sizeof(Node));
    Node *n2 = malloc(sizeof(Node));
    Node *n3 = malloc(sizeof(Node));
    Node *n4 = malloc(sizeof(Node));
    Node *n5 = malloc(sizeof(Node));

    n1->data = 4; n1->next = n2;
    n2->data = 2; n2->next = n3;
    n3->data = 7; n3->next = n4;
    n4->data = 1; n4->next = n5;
    n5->data = 9; n5->next = NULL;

    int x = 7;
    Node* temp = n1;

    while (temp != NULL && temp->next != NULL) {
        if (temp->data == x) {
            printf("LINKED LIST: Element after %d is %d\n", x, temp->next->data);
            return 0;
        }
        temp = temp->next;
    }

    printf("LINKED LIST: No next element found\n");
    return 0;
}
