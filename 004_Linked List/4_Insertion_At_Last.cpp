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


void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d); //new temp node with new value
    tail->next=temp; //the tail or current node's next point to temp node 
    tail=temp; // the tail now points to it's next which is temp node now
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
    Node* tail = node1;
    //Head pointed to node1
    Node* head = node1;
    print(head);
    insertAtTail(tail,12);
    print(head);
    insertAtTail(tail,15);
    print(head);

    return 0;
}
