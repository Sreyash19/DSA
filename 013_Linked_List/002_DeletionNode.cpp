#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;  
    }

    //destructor
    ~Node(){
        int value= this->data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<" Memory free for node with data "<<value<<endl;
    }
};

void insertAtHead(Node* &head, int d){
    Node* newNode = new Node(d);
    newNode->next = head;
    head = newNode;
}

void print(Node* &head){
    Node* temp =  head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void deleteNode(int position, Node* &head, Node* &tail){
    //deleting start node or first node
    if(position == 1){
        Node* temp = head;
        head = head->next;
        //memory free start node
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
            cnt++;
        }

        prev->next =  curr->next;
        if(prev->next == NULL){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}
int main()
{

    Node* node1 =  new Node(10);
    Node* head =  node1;
    Node* tail= node1;
    print(head);
    insertAtHead(head,45);
    insertAtHead(head,18);
    insertAtHead(head,22);
    insertAtHead(head,33);
    print(head);

    deleteNode(4, head, tail);
    print(head);
    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;
    deleteNode(4, head,tail);
    cout<<"Tail "<<tail->data<<endl;
    return 0;
}