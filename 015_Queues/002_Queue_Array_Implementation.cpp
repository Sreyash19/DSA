#include<iostream>
using namespace std;
class Queue {
    int *arr;
    int qfront;
    int rear;
    int size;
public:
    Queue() {
        size = 100001;
        arr = new int[size];
        qfront =0;
        rear =0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(qfront==rear){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int data) {
        if(rear == size){
            cout<<"Queue is full"<<endl;
        }else{
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if(qfront==rear){
            return -1;
        }else{
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront==rear){
                qfront=0;
                rear=0;
            }
            return ans;
        }
     }

    int front() {
        if(qfront==rear){
            return -1;
        }else{
            return arr[qfront];
        }
    }
};
int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(12);
    q.enqueue(16);
    cout<<"Front is : "<<q.front()<<endl;

    if(q.isEmpty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }
}