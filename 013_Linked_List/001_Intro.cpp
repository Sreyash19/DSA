#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void InsertAtHead(Node* &head, int d){
    //We used reference coz we want to make change in original list and not want to create a copy 
    //new Node create
    Node* temp = new Node(d);
    temp->next = head;
    head= temp;
} 

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void InsertAtPosition(Node* &tail,Node* &head,int position,  int d){
    //insert at start
    if(position==1){
        InsertAtHead(head,d);
        return;
    }

    Node* temp= head;
    int cnt =1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    //Inserting at last position
    if(temp->next == NULL){
        InsertAtTail (tail,d);
        return;
    }

    //creating a npde for d
    Node* NewNode = new Node(d);
    NewNode->next = temp->next;
    temp->next = NewNode;
}
int main()
{

    Node* node1 = new Node(10 ); //Object of class Node dynamically 
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    
    //Head pointed to node1
    Node* head = node1;
    Node* tail = node1; //single node so its start and end;
    print(head);
    // InsertAtHead(head, 12);    
    InsertAtTail(tail, 12);    
    InsertAtTail(tail, 15);    
    print(head);
    InsertAtPosition(tail,head,3,22);
    print(head);
    return 0;
}