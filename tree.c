#include <stdio.h>
#include <stdlib.h>

const int	NUM_NODES = 3;

typedef struct Node {
	int		value;
	struct Node    *next;
};

struct Node    *
allocateNode(int i)
{
	struct Node    *node;
	node = (struct Node *)malloc(sizeof(struct Node));
	node->value = i;
	return node;
};


void 
printNodes(struct Node *head)
{
	while (head != NULL) {
		printf("Node: %d", head->value);
		struct Node    *oldHead;
		oldHead = head;
		head = head->next;
		free(oldHead);
	}
	return;
};

void 
printNode(struct Node *node)
{
	printf("Node{value: %d, next: %d}\n", node->value, (int)node->next);
}

int 
main()
{

	struct Node	head = {
		.value = 0,
		.next = NULL
	};

	struct Node    *headPtr = &head;
	struct Node    *current = &head;

	for (int i = 1; i < NUM_NODES; i++) {
		struct Node    *next = allocateNode(i);
		current->next = next;
		printNode(current);
		current = next;
	}

	/* printNodes(headPtr); */
	return 0;
}
