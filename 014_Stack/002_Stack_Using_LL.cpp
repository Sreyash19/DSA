#include<iostream>
using namespace std;
//STACK IMPLEMENTATION USING LINKED LIST

class Node{
    public:
        int data;
        Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        int value= this->data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
    }
};
class Stack{
    Node* top;

    public:
        Stack(){
            top = NULL;
        }
    
    void push(int element){
        Node* temp = new Node(element);
    // Check if stack (heap) is full.
    // Then inserting an element would
    // lead to stack overflow
    if(!temp){
        cout<<"Stack overflow"<<endl;
    }
    //initialize data in node
    temp->data = element;
    
    //point the node to next node 
    temp->next = top;

    //update top to new node
    top = temp;
    }

    void pop(){
        //check if stack has any value/node 
        if(top == NULL){
            cout<<"Under flow"<<endl;
        }
        //point a temp to top node
        Node* temp = top;

        //move top to next element/node
        top=top->next;

        //delete the previous temp node
        free(temp);
    }

    void peek(){
        if(top==NULL){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<top->data<<endl;
        }
    }
    bool isEmpty(){
 
     return top==NULL;    
    }

    void display(){
        Node* temp;
        if(top==NULL){
            cout<<"Stack Underflow"<<endl;
        }
        else{
            temp=top;
            while(temp!=NULL){
                cout<<temp->data;
                temp = temp->next;
                if(temp!=NULL){
                    cout<<" -> ";
                }
            }
            cout<<endl;
        }
    }

};

int main()
{
    Stack st;
    
    st.push(12);
    st.push(18);
    st.push(20);
    st.display();
    

    st.peek();
    st.pop();
    st.peek();
    st.pop();
    st.peek();
    st.pop();
    st.peek();

    
    if(st.isEmpty()){
         cout<<"Stack is empty"<<endl;
     }
     else{
         cout<<"Stack is not empty"<<endl;
     }
    return 0;
}