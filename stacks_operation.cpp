#include <iostream>
using namespace std;

#define MAX 5   // maximum size of stack

class Stack {
    int arr[MAX];   // array to store stack elements
    int top;        // index of top element

public:
    Stack() { top = -1; }   // constructor initializes empty stack

    // Push operation
    void push(int x) {
        if (top >= MAX - 1) {
            cout << "Stack Overflow\n";
        } else {
            arr[++top] = x;
            cout << x << " pushed into stack\n";
        }
    }

    // Pop operation
    void pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
        } else {
            cout << arr[top--] << " popped from stack\n";
        }
    }

    // Peek operation
    void peek() {
        if (top < 0) {
            cout << "Stack is Empty\n";
        } else {
            cout << "Top element is: " << arr[top] << endl;
        }
    }

    // Display stack
    void display() {
        if (top < 0) {
            cout << "Stack is Empty\n";
        } else {
            cout << "Stack elements: ";
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    s.peek();

    s.pop();
    s.display();

    return 0;
}