#include<iostream>
#include<stack>

using namespace std;

//IMPLEMENTATION OF STACK USING ARRAYS
class Stack{
    //properties
    public:
        int *arr;
        int top = -1; //it is basically index in array
        int size;

    //behaviour
    Stack (int size){
        this->size = size;
        arr = new int[size];  //array created dynamically
    }

    void push(int element){
         if(size-top > 1){
            top++;
            arr[top] = element;
         }
         else{
            cout<<"Stack overflow";
         }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack underflow";
        }
    }

    int peek(){
        if(top>=0 ){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return  -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }

};

int main()
{
    Stack st(5);
    st.push(22);
    st.push(43);
    st.push(44);

    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    if(st.isEmpty()){
        cout<<"Stack is empty bhai"<<endl;
    }
    else{
        cout<<"Stack is not empty bhai"<<endl;
    }

//*****STACK USING STL*****

    // //creation
    // stack<int> s;

    // // push operation
    // s.push(2);
    // s.push(3);
    // s.push(4);

    // //pop
    // s.pop();

    // cout<<"Printing top element "<<s.top()<<endl;
    // if(s.empty()){
    //     cout<<"Stack is empty"<<endl;
    // }
    // else{
    //     cout<<"Stack is not empty"<<endl;
    // }

    // cout<<"Size of stack "<<s.size()<<endl;
    return 0;
}