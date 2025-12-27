// Linked List Implementation of Queue in C
#include <stdio.h>
// #include<stdio.h>
#include <stdlib.h>
//node structure
struct Node{
    int data;
    struct Node*  next;
};

//global pointers
struct Node* front = NULL;
struct Node* rear = NULL;


// funtion to ADD AN ITEM 
void enqueue(int value)
{
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    if(newNode==NULL){
        printf("queue overflow\n");
        return;
    }
    newNode->data= value;
    newNode->next= NULL;
    if(rear == NULL){ // queue is empty
        front = rear = newNode;
        return;

    }
    else 
    {
        rear->next=newNode;
        rear=newNode;
    }
    printf("%d enqueued to queue\n", value);

}
//  funtion to remove an item 
void dequeue(){
    struct Node* temp= front;
    if(front==NULL){
        printf("queue underflow\n");
        return;
    }
    temp = front;
    printf("%d dequeued from queue\n", temp->data);
    front= front->next;
    if(front==NULL){
        rear=NULL;
    }
    free(temp);

}
// function to display the queue
void display(){
    struct Node* temp= front;
    if(front==NULL){
        printf("queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    display();
    return 0;
}
  

