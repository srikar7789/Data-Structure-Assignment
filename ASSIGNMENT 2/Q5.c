#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push()
{
    struct node *newnode;
    int value;

    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter value: ");
    scanf("%d", &value);

    newnode->data = value;
    newnode->next = top;
    top = newnode;
}

void pop()
{
    struct node *temp;

    if(top == NULL)
    {
        printf("Stack is Empty");
    }
    else
    {
        temp = top;
        printf("Deleted element is %d\n", top->data);
        top = top->next;
        free(temp);
    }
}

void peek()
{
    if(top == NULL)
    {
        printf("Stack is Empty");
    }
    else
    {
        printf("Top element is %d\n", top->data);
    }
}

void display()
{
    struct node *temp;

    if(top == NULL)
    {
        printf("Stack is Empty");
    }
    else
    {
        temp = top;
        while(temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n1.Push 2.Pop 3.Peek 4.Display 5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1)
            push();
        else if(choice == 2)
            pop();
        else if(choice == 3)
            peek();
        else if(choice == 4)
            display();
        else if(choice == 5)
            break;
        else
            printf("Invalid choice");
    }

    return 0;
}