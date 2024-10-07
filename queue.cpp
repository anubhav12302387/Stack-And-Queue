#include<iostream>
using namespace std;
#define MAX 5
int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int value){
    if(rear == MAX - 1){
        cout<<"Overflow"<<endl;
        return;
    }else{
        if(front == -1){
            front = 0;
        }
        queue[++rear]= value;
        cout<<"Enqueued Value: "<<value<<endl;
    }
}

void dequeue(){
    if(front == -1 || front > rear){
        cout<<"Underflow"<<endl;
        return;
    }else{
        cout<<"Dequeued value: "<<queue[front]<<endl;
        front = front + 1;
        if(front > rear){
            front = -1;
            rear = -1;
        }
    }
}

void display(){
    if(front == -1){
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"Current Queue: ";
        for(int i = front; i <= rear; i++){
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int choice, value;
    while(true){
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Ennter";
                cin>>value;
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
                cout<<"Invalid choice"<<endl;
        }
    }
}
