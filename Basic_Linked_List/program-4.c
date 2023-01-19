//linked list reverse way print...

#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node{
    int data;
    Node* next;
};

Node* Create_Node(int ara[], int length) {

}

int main() {
    int ara[] = {12, 14, 15, 24, 25, 36, 47, 42, 41, 70};
    int length = sizeof(ara) / sizeof(ara[0]);

    Node* head = Create_Node(ara, length);

return 0;
}
