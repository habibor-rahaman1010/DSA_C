//linked list implement in c program...

#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node{
    int data;
    Node* next;
};

//create a head node in linked list...
Node* Create_Node(int item, Node* next) {
    Node* new_node = (Node*) malloc(sizeof(Node));

    if(new_node == NULL){
        printf("Error! could not create a node \n");
        exit(1);
    }
    new_node->data = item;
    new_node->next = next;
    return new_node;
}

//insert data at append...
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

void print_linked_list(Node* head) {
    Node* current_node = head;
    while(current_node != NULL){
        printf("%d ", current_node->data);
        current_node = current_node->next;
    }
    printf("\n");
}

int main() {
    Node* head, *n1;
    n1 = Create_Node(10, NULL);
    head = n1;

    head = append(head, 20);
    head = append(head, 30);
    head = append(head, 40);
    head = append(head, 50);
    head = append(head, 60);

    print_linked_list(head);

return 0;
}
