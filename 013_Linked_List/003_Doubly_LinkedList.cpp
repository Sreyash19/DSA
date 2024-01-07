#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    //constructor
    Node(int d){
        this->data= d;
        this->prev = NULL;
        this->next = NULL;

    }
    ~Node(){
        int val = this->data;
        if(next != NULL){
            delete next;
            next=NULL;
        }
        cout<<"Memory Free for node with data "<<val<<endl;
    }
};

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int getLength(Node* head){
    int len =0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}
void insertAtHead(Node* &head, Node* &tail, int d){
    //empty lsit
    if(head==NULL){
        Node* temp = new Node(d);
        head =  temp;
        tail =  temp;
    }
    else{ 
    Node* newNode = new Node(d);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    }
}

void insertAtTail(Node* &tail, Node* &head, int d){
    if(tail==NULL){
        Node* temp = new Node(d);
        tail =  temp;
        head =  temp;
    }
    else{
    Node* temp = new Node(d);
    tail->next= temp;
    temp->prev=  tail;
    tail= temp;
    }
}
void insertAtPosition(Node* &head, Node* &tail, int position, int d){
    //insert at start
    if(position == 1){
        insertAtHead(head,tail, d);
        return;
    }
    Node* temp = head;
    int cnt=1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    //inserting at last position
    if(temp->next == NULL){
        insertAtTail(tail,head, d);
        return;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(int position, Node* &head, Node* &tail){
    //deleting start node or first node
    if(position == 1){
        Node* temp = head;
        temp->next->prev =  NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
        
    }
    else{
        //deleting any middle node or last node
        Node* curr= head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt<position){
            prev= curr;
            curr = curr->next;
            
            // if(curr->next = NULL){
            //     tail = prev;
            // }
            cnt++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next =  NULL;

        delete curr;
    }
}

int main()
{
    // Node* node1 = new Node(10);
    // Node* head =  node1;
    // Node* tail = node1;
    Node* head =  NULL;
    Node* tail = NULL;
    print(head);
    cout<<getLength(head)<<endl;

    insertAtHead(head,tail, 11);
    print(head);
    insertAtHead(head,tail, 14);
    print(head);
    insertAtTail(tail,head,25);
    insertAtTail(tail,head,95);
    insertAtTail(tail,head,19);
    print(head);
    insertAtPosition(head,tail, 3, 55);
    print(head);
    insertAtPosition(head,tail, 5, 78);
    print(head);
    cout<<"Deletion"<<endl;
    deleteNode(3,head,tail);
    print(head);
    deleteNode(6,head,tail);
    print(head);

    cout<<"Head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
    return 0;
}