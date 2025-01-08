#include "Queue.h"
#include<stdlib.h>
#include<time.h>


typedef struct Node {
	int data;
	struct Node* next;
}Node;

struct List {
	struct Node* head;
	struct Node* tail;	
	int size;
};

PRIVATE void make_empty(QueueHandle handle);
PRIVATE int is_empty(QueueHandle handle);



PUBLIC QueueHandle CreateQueue(void)
{
	QueueHandle handle = (QueueHandle)malloc(sizeof(struct List));
	if (!handle)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}
	
	handle->head = NULL;
	handle->tail = NULL;
	handle->size = 0;
	return handle;
}
PUBLIC void destroyList(QueueHandle handle)
{
	make_empty(handle);	
	free(handle);
}


PRIVATE void make_empty(QueueHandle handle)
{
	while (!is_empty(handle))
	{
		dequeue(handle);
	}
}


PUBLIC void enqueue(QueueHandle handle, int data)
{
	Node* temp = (Node*)malloc(sizeof(Node));
	if (!temp)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}
	temp->data = data;
	temp->next = NULL;
	++handle->size;
	if (!handle->head)
	{
		handle->head = handle->tail = temp;
	}
	else {
		handle->tail->next = temp;
		handle->tail = temp;
	}
}

PUBLIC void display(QueueHandle handle)
{
	if (is_empty(handle))
	{
		printf("Queue is empty.\n");
		return;
	}
	Node* temp = handle->head;
	printf("Queue: ");
	while (temp)
	{
		printf("%d ", temp->data);
		temp = temp->next;
		
	}
	printf("\n");
}
PUBLIC int dequeue(QueueHandle handle)
{
	if (is_empty(handle))
	{
		fprintf(stderr, "Queue is empty\n");
		return -1;
	}
	Node* temp = handle->head;
	handle->head = handle->head->next;
	--handle->size;
	free(temp);
	return 0;
}

PRIVATE int is_empty(QueueHandle handle)
{
	return handle->head == NULL;
}



PUBLIC void randomize(void)
{
	srand(time(NULL));
}

PUBLIC int getQueueSize(QueueHandle handle)
{
	return handle->size;
}