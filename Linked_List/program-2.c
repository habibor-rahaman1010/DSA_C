//linked list implement in c program...

#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node{
    int data;
    Node* next;
};

//create a head node in linked list...
Node* Creat_Node(int item, Node* next) {
    Node* new_node = (Node*) malloc(sizeof(Node));

    if(new_node == NULL){
        printf("Error! could not create a node \n");
        exit(1);
    }
    new_node->data = item;
    new_node->next = next;
    return new_node;
}

Node* append(Node* head, int item) {
    Node* new_node = Creat_Node(item, NULL);

    if(head == NULL){
        return new_node;
    }
    Node* current_node = head;
    while(current_node != NULL){
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
    n1 = Creat_Node(10, NULL);
    head = n1;

    head = append(head, 20);

    print_linked_list(head);

return 0;
}
