#include<iostream>
#include<stack>
using namespace std;

//Enqueue operation costly
class Queue{
    stack<int> s1;
    stack<int> s2;

    public:
    void enqueue(int x){

        //move elements fron s1 to s2
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }

        //push new element into s1
        s1.push(x);

        //move back all elements from s2 to s1
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }

    int dequeue(){
        if(s1.empty()){
            return -1;
        }

        int x = s1.top();
        s1.pop();
        return x;
    }
}; 
int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout<<"Popped : "<<q.dequeue()<<endl;
    cout<<"Popped : "<<q.dequeue()<<endl;
    return 0;
}