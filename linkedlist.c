#include <stdio.h>
#include <stdlib.h>

const int NUM_NODES = 100;

typedef struct Node {
    int value;
    struct Node *next;
};

struct Node *allocateNode(int i)
{
    struct Node *node;
    node = (struct Node *) malloc(sizeof(struct Node));
    node->value = i;
    return node;
};


void printNode(struct Node *node)
{
    printf("Node{value: %d, next: %d}\n", node->value, (int) node->next);
}

void printNodes(struct Node *head)
{
    int listExhausted = 0;
    while (!listExhausted) {
	printNode(head);
	if (head->next != NULL) {
	    head = head->next;
	} else {
	    listExhausted = 1;
	}
    }
    return;
};

int main()
{

    struct Node head = {
	.value = 0,
	.next = NULL
    };

    struct Node *headPtr = &head;
    struct Node *current = &head;

    for (int i = 1; i < NUM_NODES; i++) {
	struct Node *next = allocateNode(i);
	current->next = next;
	current = next;
    }

    printNodes(headPtr);
    return 0;
}
