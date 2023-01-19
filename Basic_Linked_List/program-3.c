//linked list implement in c program...

#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node {
    int data;
    Node* next;
};

//convert array to linked list...
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

//item search in lined list..
int Search_Item(Node* head, int item) {
    Node* a = head;
    int index = 0;
    while(a != NULL){
        if(a->data == item){
            return index;
        }
        index++;
        a = a->next;
    }
    return - 1;
}

int main() {
    int ara[] = {12, 34, 56, 31, 54, 36, 47, 88, 58, 100};
    int lenght = sizeof(ara) / sizeof(ara[0]);

    Node* head = Create_Node(ara, lenght);

    Node* a = head;
    while(a != NULL){
        printf("%d ", a->data);
        a = a->next;
    }
    printf("\n");

    printf("Item found at index: %d \n", Search_Item(head, 31));

return 0;
}
