#include<stdio.h>

int q[5];
int front = -1, rear = -1;



int qSize(){
    return (sizeof(q) / sizeof(q[0]));
}

int isFull(){
    int currentSize = qSize();

    if(currentSize == front)
        return -1;
    
    return 0;
}

int isEmpty(){
    int currentSize = qSize()-1;

    printf("\n%d %d\n", front, currentSize);

    if(front == currentSize)
            return 0;
        
    return -1;
}

void enqueue(int val){

    if(isFull() == -1){
        printf("Stack overflow!");
        return;
    }

    q[rear] = val;  
    rear++;
    printf("%d insertion successful!\n", val);
}

void dequeue(){
    if(isEmpty() == 0){
        printf("Stack underflow\n");
        return;
    }
    int val = q[front];

    printf("%d is deleted from queue.\n", val);
    front++;
}

// this function should shif all the elements and fill gaps
void update(){

}

int main(){

    // element should be from user input and 
    // deletion and insertion option should be using switch()

    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);

    printf("\n\n");

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();

    return 0;
}