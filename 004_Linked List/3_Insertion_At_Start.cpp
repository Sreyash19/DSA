#include <iostream>
using namespace std;

class Node {
   public:
  int data;
  Node* next;

//Constructor
  Node(int data){
    this->data=data;
    this->next=NULL;
  }
};

void insertAtHead(Node* &head,int d){ //we took reference(&head) here because we dont want to create new list or make a copy of list, we want to updated the existing list only
    //create new node
    Node* temp= new Node(d); 
    temp->next=head; //the temp node points to first element as head points only first element
    head= temp; //Then the head's reference is updated and now it points the new added element/node which is "temp" here
}

 

void print(Node* &head){
    Node* temp=head;
    while(temp != NULL){
        cout<< temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    // create new node
    Node* node1=new Node(10);  //passes value to constructor  
   
    //Head pointed to node1
    Node* head = node1;
    print(head);
    insertAtHead(head,12);
    print(head);
    insertAtHead(head,15);
    print(head);

    return 0;
}
