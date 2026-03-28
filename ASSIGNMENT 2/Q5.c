#include <stdio.h>
#define MAX 5

int queue[MAX], front = -1, rear = -1;

void enqueue(int x) {
    if ((rear + 1) % MAX == front) {
        printf("Queue full\n");
    } else {
        if (front == -1)
            front = 0;
        rear = (rear + 1) % MAX;
        queue[rear] = x;
    }
}

void dequeue() {
    if (front == -1) {
        printf("Queue empty\n");
    } else {
        printf("Deleted: %d\n", queue[front]);
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % MAX;
    }
}

void peek(){
     if(front! = -1)
         printf("front : %d\n " , queue[front];
}

void display() {
    int i;
    if (front == -1) {
        printf("Queue empty\n");
    } else {
        i = front;
        while (1) {
            printf("%d ", queue[i]);
            if (i == rear)
                break;
            i = (i + 1) % MAX;
        }
        printf("\n");
    }
}

int main() {
    int ch, x;

    while (1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &x);
                enqueue(x);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;
        }
    }
}
