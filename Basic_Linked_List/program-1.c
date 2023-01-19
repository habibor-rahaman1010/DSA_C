//Linked List in c program...

#include <stdio.h>
#include <stdlib.h>

typedef struct Node Node;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* a = NULL, *b = NULL, *c = NULL, *d = NULL, *e = NULL, *f = NULL;

    //dynamic memory allocate...
    a =  (Node *) malloc(sizeof(Node));
    b =  (Node *) malloc(sizeof(Node));
    c =  (Node *) malloc(sizeof(Node));
    d =  (Node *) malloc(sizeof(Node));
    e =  (Node *) malloc(sizeof(Node));
    f =  (Node *) malloc(sizeof(Node));

    //value assign in node...
    a->data = 10;
    b->data = 20;
    c->data = 30;
    d->data = 40;
    e->data = 50;
    f->data = 60;

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = NULL;

    Node* head = a;
    while(head != NULL){
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");

    free(a);
    free(b);
    free(c);
    free(d);
    free(e);
    free(f);
    free(head);

return 0;
}
