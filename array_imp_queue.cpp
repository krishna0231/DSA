#include<iostream>
using namespace std;
# define MAX 5 // maximum size of queue
class queue {
    int arr[MAX]; // array to store maximum size of queue
    int front,rear; // index of front and rear element
    public: 
         queue(){
            front=-1;
            rear=-1;

         }
         // check if Q is full 
         bool isfull(){
            return (rear ==MAX-1);

         }
         //check if Q is empty
            bool isempty(){
                return (front ==-1 || front>rear);
            }
            // add/enqueue operation
            void enqueue(int x){
                if(isfull()){
                    cout<<"Q is overflow\n";

                }
                else{
                    if(front ==-1){
                        front=0;
                    }
                    rear++;
                    arr[rear]=x;
            }
            // remove/dequeue operation
            void dequeue(){
                if(isempty()){
                    cout<<"Q is underflow\n";
                }
                else{
                    cout << arr[front] << " dequeued\n";
                    front++;
                    if(front > rear){
                        front = rear = -1;
                    }
                }
            }
            // display the queue
            void display(){
                if(isempty()){
                    cout<<"Q is empty\n";
                }
                else{
                    cout<<"Queue elements: ";
                    for(int i=front; i<=rear; i++){
                        cout<<arr[i]<<" ";
                    }
                    cout<<endl;
                }
            }
};

int main(){
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
    q.dequeue();
    q.display();
    return 0;
}
}