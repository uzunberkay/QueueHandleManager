#ifndef QUEUE_H
#define QUEUE_H

#include<stdio.h>

#define PUBLIC
#define PRIVATE static

typedef struct List* QueueHandle;



PUBLIC QueueHandle CreateQueue(void);
PUBLIC void destroyList(QueueHandle handle);
PUBLIC void enqueue(QueueHandle handle, int data);
PUBLIC void display(QueueHandle handle);
PUBLIC int dequeue(QueueHandle handle);
PUBLIC void randomize(void);
PUBLIC int getQueueSize(QueueHandle handle);










#endif