/******Linked-List Implementation of Queue********/
#include<iostream>
using namespace std;
class Node{//Class for creating node
    public:
        int data;
        Node * next;
        Node(int val){
            data=val;
            next=NULL;
        }
};
class Queue{//creates a Queue and defines methods
    Node* head;
    Node* tail;
    public:
    Queue(){
        head=NULL;
        tail=NULL;
    }
    void Enqueue(int val){//linked list push-back
        Node* New=new Node(val);
        if(head==NULL){
            tail=New;
            head=New;
            return;
        }
        tail->next=New;
        tail=New;
    }
    void print(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void dequeue(){//linked list pop_front
        if(head==NULL){
            cout<<"queue is empty";
            return;
        }
        Node*temp=head->next;
        delete head;
        head=temp;
        if(head==NULL)tail=NULL;
    }
};
int main(){
    Queue q;
    cout<<"Enqueue:"<<endl;
    q.Enqueue(5);
    q.Enqueue(6);
    q.Enqueue(7);
    q.print();
    cout<<"Dequeue:"<<endl;
    q.dequeue();
    q.print();
    return 0;
}