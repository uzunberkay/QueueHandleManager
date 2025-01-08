#include <stdio.h>
#include "Queue.h"
#include <time.h>

#define QUEUE_SIZE 10
#define RANDOM_MAX_VALUE 0xFF

int main()
{
    randomize();

    QueueHandle queue1 = CreateQueue();
    printf("Queue 1: Adding random elements...\n");

    for (int i = 0; i < QUEUE_SIZE; ++i)
    {
        int randomValue = rand() % RANDOM_MAX_VALUE;
        enqueue(queue1, randomValue);
        printf("Enqueued %d to Queue 1\n", randomValue);
    }

    printf("Queue 1 after enqueue operations:\n");
    display(queue1);

    QueueHandle queue2 = CreateQueue();
    printf("\nQueue 2: Adding random elements...\n");

    for (int i = 0; i < QUEUE_SIZE; ++i)
    {
        int randomValue = rand() % RANDOM_MAX_VALUE;
        enqueue(queue2, randomValue);
        printf("Enqueued %d to Queue 2\n", randomValue);
    }

    printf("Queue 2 after enqueue operations:\n");
    display(queue2);

    destroyQueue(queue1);
    destroyQueue(queue2);

    printf("\nAll queues have been destroyed. Exiting program.\n");

    return 0;
}
