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
            q1.push(x);
        }

        void dequeue(){
            if(q1.empty()){
                return ;
            }
            
            //move elements from q1 to q2 except for one (last one)
            while(q1.size() != 1){
                q2.push(q1.front());
                q1.pop();
            }

            //pop last element
            q1.pop();

            //swap queues
            queue<int> q = q1;
            q1=q2;
            q2=q;
        }

        int top(){
            if(q1.empty()){
                return -1;
            }
            while(q1.size() != 1){
                q2.push(q1.front());
                q1.pop();
            }

            //last pushed element
            int temp = q1.front();

            //to empty the auxiliary queue after last operation
            q1.pop();

            //push last element to q2
            q2.push(temp);

            //swap the two queues names
            queue<int> q = q1;
            q1=q2;
            q2=q;

            return temp;
            
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
    cout<<s.top()<<endl;
    s.dequeue();
    cout<<s.top()<<endl;
    s.dequeue();
    return 0;
}