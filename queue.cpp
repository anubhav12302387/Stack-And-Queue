// // Basic Queue Problem

// #include<iostream>
// using namespace std;
// #define MAX 5
// int queue[MAX];
// int front = -1;
// int rear = -1;

// void enqueue(int value){
//     if(rear == MAX - 1){
//         cout<<"Overflow"<<endl;
//         return;
//     }else{
//         if(front == -1){
//             front = 0;
//         }
//         queue[++rear]= value;
//         cout<<"Enqueued Value: "<<value<<endl;
//     }
// }

// void dequeue(){
//     if(front == -1 || front > rear){
//         cout<<"Underflow"<<endl;
//         return;
//     }else{
//         cout<<"Dequeued value: "<<queue[front]<<endl;
//         front = front + 1;
//         if(front > rear){
//             front = -1;
//             rear = -1;
//         }
//     }
// }

// void display(){
//     if(front == -1){
//         cout<<"Queue is empty"<<endl;
//     }else{
//         cout<<"Current Queue: ";
//         for(int i = front; i <= rear; i++){
//             cout<<queue[i]<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int choice, value;
//     while(true){
//         cin>>choice;

//         switch(choice){
//             case 1:
//                 cout<<"Ennter";
//                 cin>>value;
//                 enqueue(value);
//                 break;
//             case 2:
//                 dequeue();
//                 break;
//             case 3:
//                 display();
//                 break;
//             case 4:
//                 return 0;
//             default:
//                 cout<<"Invalid choice"<<endl;
//         }
//     }
// }





// // Circular Queue


// #include<iostream>
// using namespace std;
// #define SIZE 5
// int queue[SIZE];
// int front = -1;
// int rear = -1;

// bool isFull(){
//     return ((rear + 1) % SIZE == front);
// }

// bool isEmpty(){
//     return (front == -1);
// }

// void enqueue(int value){
//     if (isFull()){
//         cout << "Queue overflow! Cannot Enqueue " << value << endl;
//         return;
//     }

//     if(front == -1){
//         front = 0;
//     }
//     rear = (rear + 1) % SIZE;
//     queue[rear] = value;
//     cout << "Enqueued value: " << value << endl;
// }

// void dequeue(){
//     if (isEmpty()) {
//         cout << "Queue Underflow" << endl;
//         return;
//     }

//     cout << "Dequeued value: " << queue[front] << endl;
//     if (front == rear) {
//         front = -1;
//         rear = -1;
//     } else {
//         front = (front + 1) % SIZE;
//     }
// }

// void display(){
//     if (isEmpty()) {
//         cout << "Queue is empty" << endl;
//     } else {
//         cout << "Current Queue: ";
//         int i = front;
//         while (i != rear) {
//             cout << queue[i] << " ";
//             i = (i + 1) % SIZE;
//         }
//         cout << queue[rear] << endl;
//     }
// }

// int main(){
//     int choice, value;
//     while(true){
//         cin >> choice;
//         switch(choice){
//             case 1:
//                 cin >> value;
//                 enqueue(value);
//                 break;
//             case 2:
//                 dequeue();
//                 break;
//             case 3:
//                 display();
//                 break;
//             case 4:
//                 return 0;
//             default:
//                 cout << "Invalid choice" << endl;
//         }
//     }
// }




// // Queue implementation using Linked list
// #include<iostream>
// using namespace std;

// struct node {
//     int data;
//     node *next;
// };

// node *front = nullptr;
// node *rear = nullptr;

// void enqueue(int value) {
//     node *newnode = new node();
//     newnode->data = value;
//     newnode->next = nullptr;
//     if (rear == nullptr) {
//         front = rear = newnode; 
//     } else {
//         rear->next = newnode; 
//         rear = newnode; 
//     }
//     cout << "Enqueued value: " << value << endl;
// }

// void dequeue() {
//     if (front == nullptr) {
//         cout << "Underflow" << endl;
//     } else {
//         node *temp = front; 
//         front = front->next; 
//         cout << "Dequeued value: " << temp->data << endl; 
//         delete temp; 
//     }
// }

// void display() {
//     if (front == nullptr) {
//         cout << "Queue is empty" << endl; 
//     } else {
//         node *current = front; 
//         cout << "Queue contents: ";
//         while (current != nullptr) {
//             cout << current->data << " "; 
//             current = current->next; 
//         }
//         cout << endl; 
//     }
// }

// int main() {
//     int choice, value;
//     while (true) {
//         cout << "1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch (choice) {
//             case 1: 
//                 cout << "Enter value to enqueue: ";
//                 cin >> value;
//                 enqueue(value);
//                 break;
//             case 2:
//                 dequeue();
//                 break;
//             case 3:
//                 display();
//                 break;
//             case 4: 
//                 cout << "Exiting..." << endl;
//                 return 0;
//             default:
//                 cout << "Invalid choice. Please try again." << endl;
//         }
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value) {
    if ((rear + 1) % SIZE == front) {
        cout << "Queue Overflow" << endl;
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear = (rear + 1) % SIZE;
    queue[rear] = value;
    cout << "Enqueued Value: " << value << endl;
}

void dequeue() {
    if (front == -1) {
        cout << "Queue Underflow" << endl;
        return;
    }
    cout << "Dequeued Value: " << queue[front] << endl;

    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }
}

void display() {
    if (front == -1) {
        cout << "Queue is Empty" << endl;
        return;
    }
    cout << "Queue Elements: ";
    int i = front;
    while (i != rear) {
        cout << queue[i] << " ";
        i = (i + 1) % SIZE;
    }
    cout << queue[rear] << endl;
}

int main() {
    int choice, value;

    while (true) {
        cout << "\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to enqueue: ";
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
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }

    return 0;
}

