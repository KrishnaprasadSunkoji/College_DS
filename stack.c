#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

//adding element on top.
void push(int value)
{
    if (top == SIZE - 1)
    {
        printf("OVERFLOW\n");
    }
    else
    {
        top++;
        stack[top] = value;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("UNDERFLOW\n");
    }
    else
    {
        top--;
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack: ");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);

    display();
    pop();
    display();
    return 0;
}   