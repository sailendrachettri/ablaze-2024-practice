#include<stdio.h>

#define MAX_SIZE 5

int q[MAX_SIZE];
int front = -1, rear = -1;

int qSize() {
    return (rear - front + MAX_SIZE) % MAX_SIZE;
}

int isFull() {
    if ((rear + 1) % MAX_SIZE == front)
        return 1;
    return 0;
}

int isEmpty() {
    if (front == -1 && rear == -1)
        return 1;
    return 0;
}

void enqueue(int val) {
    if (isFull()) {
        printf("Queue overflow!\n");
        return;
    }
    if (isEmpty())
        front = 0;
    rear = (rear + 1) % MAX_SIZE;
    q[rear] = val;
    printf("%d insertion successful! Front: %d, Rear: %d\n", val, front, rear);
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue underflow\n");
        return;
    }
    int val = q[front];
    printf("%d is deleted from queue. Front: %d, Rear: %d\n", val, front, rear);
    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front = (front + 1) % MAX_SIZE;
    }
}

void display() {
    if (isEmpty()) {
        printf("Queue is empty. Front: %d, Rear: %d\n", front, rear);
        return;
    }
    printf("Queue elements: ");
    int i = front;
    while (1) {
        printf("%d ", q[i]);
        if (i == rear)
            break;
        i = (i + 1) % MAX_SIZE;
    }
    printf("\nFront: %d, Rear: %d\n", front, rear);
}

int main() {
    int choice, element;

    while (1) {
        printf("\nEnter 1 for insertion: ");
        printf("\nEnter 2 for deletion: ");
        printf("\nEnter 3 for display: ");
        printf("\nEnter 4 for exit: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter an element: ");
                scanf("%d", &element);
                enqueue(element);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid option\n");
        }
    }

    return 0;
}
