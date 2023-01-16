//Linked list implement c program...

#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;
struct Node {
    int data;
    Node* next;
};

//create a new node in linked list...
Node* Creat_Node(int item, Node* next) {
    Node* new_node = (Node*) malloc(sizeof(Node));
    if(new_node == NULL){
        printf("Error! could not a create a new node \n");
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

int main() {
    Node* head;
    Node* n1, *n2, *n3;

    n1 = Creat_Node(10, NULL);
    head = n1;

    head = Prepend(head, 20);
    n2 = head;
    printf("%d", n2->data);

    n3 = n2->next;
    printf("%d", n3->data);


return 0;
}
