#include <stdio.h>
#include <string.h>

char stack[100];
int top = -1;

void push(char ch)
{
    top = top + 1;
    stack[top] = ch;
}

char pop()
{
    return stack[top--];
}

int main()
{
    char str[100];
    int i;

    printf("Enter string: ");
    scanf("%s", str);

    for(i = 0; i < strlen(str); i++)
    {
        push(str[i]);
    }

    printf("Reversed string: ");

    while(top != -1)
    {
        printf("%c", pop());
    }

    return 0;
}