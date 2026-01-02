#include<stdio.h>
#include<stdlib.h>
// node structure
struct node{
    int data;
    struct node* next;
};
int main(){
    struct node* head= NULL;
    struct node* second=NULL;
    struct node* thrid=NULL;

    // allocates memory for nodes in the linked list in heap
    head = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    thrid = (struct node*) malloc(sizeof(struct node));
    // assign data and link nodes
    head->data= 10;
    head->next = second;
    second->data= 20;
    second->next = thrid;
    thrid->data= 30;
    thrid->next=NULL;


    // traversal 
    struct node*ptr = head;
    while(ptr !=NULL)
    {
        printf("%d\t",ptr->data);
        ptr= ptr->next;

    }
    return 0;
    
}