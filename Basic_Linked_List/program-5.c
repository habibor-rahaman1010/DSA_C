//insert node in linked list in c program...

#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node {
    int data;
    Node* next;
};

Node* Create_Node(int ara[], int length) {
    Node* head = NULL, *new_node = NULL, *current = NULL;

    for(int i = 0; i < length; i++){
        new_node = (Node *) malloc(sizeof(Node));
        new_node->data = ara[i];
        new_node->next = NULL;

        if(head == NULL){
            head = new_node;
            current = new_node;
        }else{
            current->next = new_node;
            current = current->next;
        }
    }
    return head;
}

//Insert at head in linked list...
void InsertAtHead(Node* head, int item) {
    Node* new_node = (Node *) malloc(sizeof(Node));
    new_node->data = item;
    new_node->next = head;
    head = new_node;

    Node* a = head;
    while(a != NULL){
        printf("%d ", a->data);
        a = a->next;
    }
    printf("\n");
}

void InsertAtTail(Node* head, int item){
    Node* new_node = (Node *) malloc(sizeof(Node));
    new_node->data = item;
    new_node->next = NULL;

    Node* a = head;
    while(a->next != NULL){
        a = a->next;
    };
    a->next  = new_node;
}


//print linked list function...
void PrintLinkedList(Node* head){
    while(head != NULL){
        printf("%d ", head->data);
        head = head->next;
    }
}

int main() {
    int ara[] = {12, 23, 14, 16, 25};
    int length  = sizeof(ara) / sizeof(ara[0]);

    Node* head = Create_Node(ara, length);

    printf("\n");

    InsertAtHead(head, 100);
    InsertAtTail(head, 200);
    PrintLinkedList(head);

return 0;
}
