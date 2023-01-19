//implement linked list in c program...

#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;
struct Node{
    int data;
    Node* next;
};

Node* CreateLinkedList(int ara[], int size){
    Node* head = NULL, *temp = NULL, *current = NULL;

    for(int i = 0; i < size; i++){
        temp = (Node *) malloc(sizeof(Node));
        temp->data = ara[i];
        temp->next = NULL;

        if(head == NULL){
           head = temp;
           current = temp;
        }else{
            current->next = temp;
            current = current->next;
        }
    }
    return head;
}

int main() {
    int ara[] = {12, 14, 16, 20, 25};
    int size = sizeof(ara) / sizeof(ara[0]);
    Node* head = CreateLinkedList(ara, size);

    while(head != NULL){
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL \n");

return 0;
}
