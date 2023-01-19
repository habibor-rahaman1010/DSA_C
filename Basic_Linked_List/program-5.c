//insert node in linked list in c program...

#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node {
    int data;
    Node* next;
};

Node* Create_Node(int ara[], int length) {

}

int main() {
    int ara[] = {12, 23, 14, 16, 25};
    int length  = sizeof(ara) / sizeof(ara[0]);

    Node* head = Create_Node(ara, length);

return 0;
}
