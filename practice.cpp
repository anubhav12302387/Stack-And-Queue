#include<iostream>
using namespace std;
#define Max 5

int arr[Max];
int front  = -1;
int rear = -1;

void enqueue(int value) {
    if(rear == Max - 1) {
        cout << "Overflow" << endl;
    } else {
        if(front == -1) {
            front = 0;
        }
        arr[++rear] = value;
        cout << "Customer ID " << value << " is enqueued" << endl;
    }
}

void dequeue() {
    if(front == -1 || front > rear) {
        cout << "Underflow" << endl;
    } else {
        cout << "Dequeued Customer ID: " << arr[front] << endl;
        front++;
        if(front > rear) {
            front = -1;
            rear = -1;
        }
    }
}

void display() {
    if(front == -1) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Customer IDs in the queue are: ";
        for(int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, value;
    
    while(true) {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                cout << "Enter Customer ID to enqueue: ";
                cin >> value;
                enqueue(value);
                break;
                
            case 2:
                dequeue();
                break;
                
            case 3:
                display();
                break;
                
            case 4:
                return 0;
                
            default:
                cout << "Invalid option" << endl;
        }
    }
    return 0;
}
