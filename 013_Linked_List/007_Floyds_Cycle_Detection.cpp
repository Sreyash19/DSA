#include<iostream>
#include<map>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

void InsertAtHead(Node* &head, int d){
    //We used reference coz we want to make change in original list and not want to create a copy 
    //new Node create
    Node* temp = new Node(d);
    temp->next = head;
    head= temp;
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
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//Floyds Loop Detection
Node* floydDetectionLoop(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast!=NULL){
        fast = fast->next;
        if(fast != NULL){
            fast=fast->next;
        }
        slow=slow->next;

        if(slow==fast){
            cout<<"Loop Present at "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}

//Get Starting Node Of Loop
Node* getStartingNode(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* intersection = floydDetectionLoop(head);
    Node* slow=head;

    while(slow!=intersection){
        slow=slow->next;
        intersection = intersection->next;
    }
    return slow;
}

void removeLoop(Node* head){
    if(head==NULL){
        return;
    }

    Node* startOfLoop = getStartingNode(head);
    Node* temp= startOfLoop;
    
    while(temp->next != startOfLoop){
           temp =temp->next; 
    }

    temp->next = NULL; 
}

int main()
{

    Node* node1 = new Node(10);

    //Refer 4th video for other cycle/loop detection approaches
    Node* tail = node1;
    Node* head = node1;
    InsertAtTail(tail,12);
    InsertAtTail(tail,15);
    InsertAtPosition(tail,head,4,22);
     
    cout<<"Head "<<head->data<<endl;
    cout<<"Tail "<<tail->data<<endl;
    print(head);
    //WE pointed last element(22)  to head->next (12) thus creating loop 
   
    tail->next = head->next;
    if(floydDetectionLoop(head) != NULL){
        cout<<"LOOP Present"<<endl;
    }else{
        cout<<"No LOOP"<<endl;
    }

    //Starting Node
    Node* loopStartingNode = getStartingNode(tail);
    cout<<"Loop Starting Node "<<loopStartingNode->data<<endl;

    removeLoop(head);
    print(head);
    
    return 0;
}