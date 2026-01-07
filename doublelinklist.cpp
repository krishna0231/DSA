/********Implementation of Doubly-Linked list*******/
#include<iostream>
using namespace std;
//class for creating node
class Node{
    public:
        int data;
        Node* next;
        Node* prev;
        Node(int val){
            data=val;
            next=prev=NULL;
        }
};
//class for creating doubly-linked list and methods
class List{
    Node* head;
    Node* tail;
    public:
        List(){
            head=tail=NULL;
        }
         void push_front(int);
         void push_back(int);
         void push_middle(int,int);
         void pop_front();
         void pop_back();
         void pop_middle(int);
         void print();   
};
 void List:: push_front(int val){
            Node* New=new Node(val);
            if(head==NULL){
                head=tail=New;
                return;
            }
            New->next=head;
            head->prev=New;
            head=New;
        }

        void List:: print(){
            Node* temp=head;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }


        void List:: push_back(int val){
            Node* New=new Node(val);
            if(tail==NULL){
                head=tail=New;
                return;
            }
            tail->next=New;
            New->prev=tail;
            tail=New;
        }
        //push in any location(checks all possiblities of position)
        void List:: push_middle(int val,int x){
            if(x<0){
                cout<<"position can't be negative"<<endl;
                return;
            }
            if(x==0){
                push_front(val);
                return;
            }
             Node* temp=head;
            for(int i=0;i<x-1&&temp->next!=NULL;i++){
                temp=temp->next;
            }
            //for position>len(list)
            if(temp->next==NULL){
                push_back(val);
                return;
            }
            Node* New=new Node(val);
            New->next=temp->next;
            New->prev=temp;
            temp->next=New;
            New->next->prev=New;
        }


        void List:: pop_front(){
            if(head==NULL){
                cout<<"Linked list is empty";
                return;
            }
            if(head==tail){
                delete head;
                head=tail=NULL;
                return;
            }
            head=head->next;
            delete head->prev;
            head->prev=NULL;
        }


        void List:: pop_back(){
            if(tail==NULL){
                cout<<"Linked list is empty";
                return;
            }
            if(head==tail){
                delete tail;
                head=tail=NULL;
                return;
            }
            tail=tail->prev;
            delete tail->next;
            tail->next=NULL;
        }

        // //pop in any location(checks all possiblities of position)
        void List:: pop_middle(int x){
            if(x<0){
                cout<<"postion can't be negative"<<endl;
                return;
            }
            if(x==0){
                pop_front();
                return;
            }
            Node*temp=head;
            for(int i=0;i<x-1&&temp->next!=NULL;i++){
                temp=temp->next;
            }
            //for position>len(list)
            if(temp->next==NULL){
                pop_back();
                return;
            }
            Node*ptr=temp->next->next;
            ptr->prev=temp;
            delete temp->next;
            temp->next=ptr;
        }
int main(){
    List l;
    l.push_front(50);
    l.push_front(60);
    l.push_front(70);
    l.print();
    l.push_back(80);
    l.print();
    l.push_middle(20,90);
    l.push_middle(20,30);
    l.print();
    l.pop_front();
    l.print();
    l.pop_back();
    l.print();
    l.pop_middle(-9);
    return 0;
}