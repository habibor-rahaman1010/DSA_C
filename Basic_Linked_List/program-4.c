//linked list reverse way print...

#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node{
    int data;
    Node* next;
};

Node* Create_Node(int ara[], int length) {
    Node* head = NULL, *temp = NULL, *current = NULL;

    for(int i = 0; i < length; i++){
        temp = (Node *) malloc(sizeof(Node));
        temp->data = ara[i];
        temp->next = NULL;

        if(head == NULL){
            head = temp;
            current = temp;
        }
        else{
            current->next = temp;
            current = current->next;
        }
    }
    return head;
}

Node* Print_Reverse(Node* head) {
    Node* priviou = NULL;
    Node* current = head;
    Node* next = NULL;

    while(current != NULL) {
        next = current->next;
        current->next = priviou;
        priviou = current;
        current = next;
    }
    return priviou;
}

int main() {
    int ara[] = {12, 14, 15, 24, 25, 36, 47, 42, 41, 70};
    int length = sizeof(ara) / sizeof(ara[0]);

    Node* head = Create_Node(ara, length);

    //print in the linked list...
    Node* a = head;
    while(a != NULL){
        printf("%d ", a->data);
        a = a->next;
    }
    printf("\n");

    //print reverse the linked list...
    Node* b = Print_Reverse(head);
    while(b != NULL){
        printf("%d ", b->data);
        b = b->next;
    }
    printf("\n");

return 0;
}
