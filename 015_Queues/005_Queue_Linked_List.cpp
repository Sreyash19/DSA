#include<iostream>
using namespace std;
//Queue implementation using Linked list
class Node{
    public:
        int data;
        Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }
    // ~Node(){
    //     int value= this->data;
    //     //memory free
    //     if(this->next != NULL){
    //         delete next;
    //         this->next = NULL;
    //     }
    //     cout<<" Memory free for node with data "<<value<<endl;
    // }
};

class Queue{
    public:
    Node* front;
    Node* rear;

    Queue(){
        front=rear=NULL;
    }

    void enqueue(int x){
        Node* temp = new Node(x);

        //If queue is empty 
        //new node is front and rear both
        if(rear==NULL){
            front=rear=temp;
            return;
        }

        //Add the new node at end of queue and change rear
        rear->next=temp;
        rear=temp;
    }

    void dequeue(){
        //if queue is empty
        if(front==NULL){
            return;
        }

        //store previous front and move front one node ahead
        Node* temp = front;
        // cout<<"Front b"<<front->data<<endl;
        front = front->next;
        // cout<<"Front a"<<front->data<<endl;


        //if front becomes null then change rear also as NULL
        //basically when we pop last element 
        if(front==NULL){
            cout<<"yes"<<endl;
            rear=NULL;
        }

        //issue in delete
        // delete temp;
     }

    void Qfront(){
        if(front==NULL){
            cout<<"Queue is empty"<<endl;
        }
        else{
            cout<<"Front element is : "<<front->data<<endl;
        }
    }
};
int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    cout<<"Front : " <<q.front->data<<endl;
    cout<<"Rear : " <<q.rear->data<<endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout<<"Front : " <<q.front->data<<endl;
    cout<<"Rear : " <<q.rear->data<<endl;
    return 0;
}