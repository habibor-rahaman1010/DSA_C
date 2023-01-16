//complete linked list implement in c program...

#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node{
    int data;
    Node* next;
};

Node* Create_Node(int item, Node* next){
    Node* new_node = (Node*) malloc(sizeof(Node));
    if(Node == NULL){
        printf("Error! could not create a node.");
        exit(1);
    }
    new_node->data = item;
    new_node->next = next;
    return new_node;
}

//inset at head new node i linked list...
Node* Prepend(Node* head, int item) {
    Node* new_node = Creat_Node(item, head);
    return new_node;
}

Node* append(Node* head, int item) {
    Node* new_node = Create_Node(item, NULL);

    if(head == NULL){
        return new_node;
    }
    Node* current_node = head;
    while(current_node->next != NULL){
        current_node = current_node->next;
    }
    current_node->next = new_node;
    return head;
}

int main() {
    Node* head, *n1;
    n1 = Create_Node(10, NULL);
    head = n1;


    return 0;
}
