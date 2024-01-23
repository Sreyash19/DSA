#include<iostream>
#include<queue>
using namespace std;
//Stack using queues
//Push operation costly
class Stack{
    queue<int> q1;
    queue<int> q2;

    public:
        void enqueue(int x){

            //pushing in q1
            q1.push(x);

            while(!q2.empty()){
                q1.push(q2.front());
                q2.pop();
            }

            //swap queues (insteads of transfering we swapped queues)
            queue<int> q = q1;
            q1 = q2;
            q2=q;

        }

        //at last we have q2 with all elements in it
        void dequeue(){
            if(q2.empty()){
                cout<<"Queue is empty"<<endl;
                
            }
            else{
                cout<<"Popped element : " << q2.front()<<endl;
                q2.pop();
            }
        }

        void top(){
            cout<<"Top: "<<q2.front()<<endl;
        }


};
int main()
{
    Stack s;
    s.enqueue(10);
    s.enqueue(20);
    s.enqueue(30);
    s.enqueue(40);
    s.enqueue(50);
    s.top();
    s.dequeue();
    s.top();
    s.dequeue();
    return 0;
}