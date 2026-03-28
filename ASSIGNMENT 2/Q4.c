#include <stdio.h>
#include <ctype.h>

int stack[100];
int top = -1;

void push(int value)
{
    top = top + 1;
    stack[top] = value;
}

int pop()
{
    return stack[top--];
}

int main()
{
    char exp[100];
    int i;
    int op1, op2, result;

    printf("Enter postfix expression: ");
    scanf("%s", exp);

    for(i = 0; exp[i] != '\0'; i++)
    {
        if(isdigit(exp[i]))
        {
            push(exp[i] - '0');
        }
        else
        {
            op2 = pop();
            op1 = pop();

            if(exp[i] == '+')
                result = op1 + op2;
            else if(exp[i] == '-')
                result = op1 - op2;
            else if(exp[i] == '*')
                result = op1 * op2;
            else if(exp[i] == '/')
                result = op1 / op2;

            push(result);
        }
    }

    printf("Result = %d", pop());

    return 0;
}