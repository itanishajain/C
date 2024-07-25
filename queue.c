#include<stdio.h>
#include<stdlib.h>
#define N 5
int q[N];
int front = -1;
int rear = -1;
void enqueue();
void dequeue();
void display();

int main(){
    int choice;
    printf("Menu \n");
    printf("1: Enqueue \n");
    printf("2: Dequeue \n");
    printf("3: Display \n");
    printf("4; Exit \n");

    while(1){
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
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
            default:
            printf("Enter a valid choice.\n");
        }
    }
}

void enqueue(){
    int data;
    if(rear == N-1){
        printf("Queue is overflow.\n");
    }
    else{
        if(front == -1){
            front = 0;
        }
    }
    printf("Enter an element:");
    scanf("%d", &data);
    rear++;
    q[rear] = data;
    printf("item inserted.");
}

void dequeue(){
    if(rear == -1 && front == -1){
        printf("Queue is underflow.\n");
    }
    else{
        printf("%d Dequeued.",q[front]);
        front++;
    }
}
void display(){
    if(rear == -1 && front == -1){
        printf("Queue is empty.\n");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("Elements:\n");
            printf("%d \t",q[i]);
        }
    }
    printf("\n");
}