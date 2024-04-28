#include<stdio.h>

#define MAX_SIZE 5

int q[MAX_SIZE];
int front = -1, rear = -1;

int qSize() {
    return (rear - front);
}

int isFull() {
    if (rear == MAX_SIZE - 1)
        return 1;
    return 0;
}

int isEmpty() {
    if (front == rear)
        return 1;
    return 0;
}

void enqueue(int val) {
    if (isFull()) {
        printf("Queue overflow!\n");
        return;
    }
    q[++rear] = val;
    printf("%d insertion successful!\n", val);
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue underflow\n");
        return;
    }
    int val = q[++front];
    printf("%d is deleted from queue.\n", val);

    // Shift elements to the left after deletion
    for (int i = front; i <= rear; i++) {
        q[i - front] = q[i];
    }
    rear -= (front + 1); // Adjust rear after shifting
    front = -1; // Reset front
}

void display() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front + 1; i <= rear; i++)
        printf("%d ", q[i]);
    printf("\n");
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