#include <stdio.h>
#include <stdlib.h> // For exit()
#define Max 5

int front = -1, rear = -1, queue[Max];

void enqueue();
void dequeue();
void display();

int main() {
    int ch;
    do {
        printf("Enter Choice\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (ch != 4);

    return 0;
}

void enqueue() {
    int n;
    if (rear >= Max - 1) {
        printf("Queue is full\n");
    } else {
        if (front == -1) { // If the queue is empty, set front to 0
            front = 0;
        }
        printf("Enter the element to enqueue: ");
        scanf("%d", &n);
        rear = rear + 1;
        queue[rear] = n;
        printf("Item %d enqueued to queue.\n", n);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty (underflow)\n");
    } else {
        printf("The dequeued element is %d\n", queue[front]);
        front = front + 1;
        // Reset front and rear if the queue is empty after dequeue
        if (front > rear) {
            front = -1;
            rear = -1;
        }
    }
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements from front to rear:\n");
        for (int i = front; i <= rear; i++) {
            printf("%d\t", queue[i]);
        }
        printf("\n");
    }
}

