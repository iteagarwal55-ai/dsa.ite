#include <stdio.h>
#include <ctype.h>

char stack[100];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    return stack[top--];
}

int priority(char x)
{
    if (x == '(')
        return 0;
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    return 3;
}

int main()
{
    char infix[] = "A+B*C";
    char postfix[100];
    int i = 0, k = 0;

    while (infix[i] != '\0')
    {
        if (isalnum(infix[i]))
        {
            postfix[k++] = infix[i];
        }
        else if (infix[i] == '(')
        {
            push(infix[i]);
        }
        else if (infix[i] == ')')
        {
            while (stack[top] != '(')
                postfix[k++] = pop();
            pop();
        }
        else
        {
            while (top != -1 && priority(stack[top]) >= priority(infix[i]))
                postfix[k++] = pop();
            push(infix[i]);
        }
        i++;
    }

    while (top != -1)
        postfix[k++] = pop();

    postfix[k] = '\0';

    printf("Postfix Expression: %s", postfix);

    return 0;
}
