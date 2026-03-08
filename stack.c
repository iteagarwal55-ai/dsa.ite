#include<stdio.h>
#include <stdlib.h>
#define MS 5
typedef struct
{
    int arr[MS];
    int top;

} stack;
void init(stack *s)
{
    s->top = -1;
}
void push(stack *s, int x)
{
    if (s->top == MS - 1)
    {
        printf("Dont act smart\n");
        return;
    }
    s->top++;
    s->arr[s->top] = x;
}
void display(stack *s)
{
    for (int i = 0; i <= s->top; i++)
    {
        printf("%d  ", s->arr[i]);
    }
    printf("\n");
}
void pop(stack *s)
{
    if (s->top == -1)
    {
        printf("Underflow\n");
        return;
    }
    --s->top;
}
int getSize(stack *s)
{
    int size = s->top + 1;
    return size;
}
int main()
{
    stack s;
    init(&s);
    push(&s, 1);
    display(&s);
    push(&s, 2);
    display(&s);
    push(&s, 3);
    display(&s);
    push(&s, 4);
    display(&s);
    printf("Size--->%d\n", getSize(&s)); 
    push(&s, 5);
    display(&s);
    push(&s, 6);
    display(&s);
    pop(&s);
    display(&s);
    pop(&s);
    display(&s);
    pop(&s);
    display(&s);
    pop(&s);
    display(&s);
    pop(&s);
    display(&s);
    pop(&s);
    display(&s);
}


