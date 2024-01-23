#include<iostream>
#include<stack>
using namespace std;

//Dequeue operation costly
class Queue{
    stack<int> s1;
    stack<int> s2;

    public:
    void s_push(int x){
        s1.push(x);
        cout<<"Pushed  now top "<<s1.top()<<endl;
    }

    int s_pop(){
        if(s1.empty() && s2.empty()){
            return -1;
        }

        //means no element is in s2 its empty and we can now move from s1 to s2 the new added elements
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }

        int x = s2.top();
        s2.pop();
        return x;
         
    }

};

int main()
{
    Queue q;

    q.s_push(10);
    q.s_push(20);
    q.s_push(30);
    cout<<q.s_pop()<<endl;
    cout<<q.s_pop()<<endl;
    q.s_push(40);
    cout<<q.s_pop()<<endl;
    cout<<q.s_pop()<<endl;
    return 0;
}