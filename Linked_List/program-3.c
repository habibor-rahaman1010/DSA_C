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
    if(new_node == NULL){
        printf("Error! could not create a node.");
        exit(1);
    }
    new_node->data = item;
    new_node->next = next;
    return new_node;
}

//inset at head new node i linked list...
Node* Prepend(Node* head, int item) {
    Node* new_node = Create_Node(item, head);
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

//search value in linked list...
int Search_Item(Node* head, int item) {
    Node* a = head;
    int index = 0;
    while(a != NULL){
        if(a->data == item){
           return index;
        }
        a = a->next;
        index++;
    }
    return - 1;
}

//remove node in linked list...
Node* Remove_Node(Node* head, Node* node) {
    if(node == head){
        head = node->next;
        free(node);
        return head;
    }
    Node* current_node = head;
    while(current_node != NULL){
        if(current_node->next == node){
            break;
        }
        current_node = current_node->next;
    }

    if(current_node == NULL){
        return head;
    }
    current_node->next = node->next;
    free(node);
    return head;
}

//return linked list length...
int get_length(Node* head) {
    Node* a = head;
    int length = 0;
    while(a != NULL){
        length++;
        a = a->next;
    }
    return length;
}

//print linked list...
void print_linked_list(Node* head) {
    Node* current_node = head;
    while(current_node != NULL){
        printf("%d ", current_node->data);
        current_node = current_node->next;
    }
    printf("\n");
}


int main() {
    Node* head, *n1, *n2;
    n1 = Create_Node(10, NULL);
    head = n1;
    head = append(head, 20);
    head = append(head, 30);
    head = append(head, 40);
    head = append(head, 50);
    Node* n = append(head, 100);

    head = Remove_Node(head, n);

    head = Prepend(head, 75);

    print_linked_list(head);
    printf("%d \n", get_length(head));
    printf("Item found at index: %d", Search_Item(head, 30));

return 0;
}
