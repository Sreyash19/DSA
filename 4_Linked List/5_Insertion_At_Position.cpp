#include <iostream>
using namespace std;

class Node{
    public:     
        int data;
        Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    } 
};

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);  
    tail->next=temp;  
    tail=temp;  
}
//Insertion at Position
void insertAtPosition(Node* &tail,Node* &head,int position, int d){
    //This below if statement check if element to be inserted is given for 1st postion it will call function insertAtHead
    // if(position==1){
    //     insertAtHead(head,d);
    //     return;
    // }
    
    Node* temp=head;
    int cnt=1; //start with 1 and not 0 like index in arrays or other
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    //When we want to insert at last in list, fot that also we need to now pass Node* &tail in function as parameter
    // if(temp->next==NULL){
    //     insertAtTail(tail,d);
    //     return;
    // }

    //creating node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}

int main(){
    Node* node1= new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtTail(tail,12);
    print(head);
    insertAtTail(tail,15);
    print(head);
    insertAtPosition(tail,head,1,22); //this will not put 22 at start it will put it in 2nd postiton, to put it at one we need to call another function InsertAtHead
    print(head);
}