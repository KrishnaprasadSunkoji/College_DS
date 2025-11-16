#include <stdio.h>
#define SIZE 5

int q[SIZE];
int front = 0, rear = -1;

void enqueue(int value)
{
    if (rear == SIZE - 1)
    {
        printf("OVERFLOW\n");
    }
    else
    {
        q[++rear] = value;
    }
}

void dequeue()
{
    if (front > rear)
    {
        printf("UNDERFLOW\n");
    }
    else
    {
        front++;
    }
}

void display()
{
    if (front > rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue: ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ",q[i]);
        }
    }
}

int main()
{
    enqueue(10);
    enqueue(20);

    dequeue();

    display();
    return 0;
}