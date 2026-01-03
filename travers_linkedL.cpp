#inlcude<iostream>
using namespace std;
class nose {
     int data ;
     node*next;

     //constructor 
     node(int val)
     {
        data =val;
        next = nullptr;

     }
};
class linkedlist {
    private:
    node *head;
     public:
     linkedlist(){
        head = nullpter;
     }
     // function to add node at end
     void append(int val) {
        node* newnode = new node(val);     
    if (head == nullpter){
        head = newnode;
        return ;
    }
    node* temp= head;
    while(tem->next!=nullptr){
        temp = tmep->next;
    }
}
}