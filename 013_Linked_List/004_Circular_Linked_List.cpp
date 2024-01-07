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

void insertNode(Node* &tail, int element, int d){
    //assuming that the element is present in list
    //empty list

    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        //non-empty list
        //assuming that the element is present in list
        Node* curr = tail;
        while(curr->data != element){
            curr=curr->next;

        }
        //element found->curr is representing element wala node
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void print(Node* tail){
    Node* temp = tail;

    //empty list
    if(tail==NULL){
        cout<<"List is Empty "<<endl;
        return;
    }

    // //this will not print when we have only one node
    // while(tail->next != temp){
    //     cout<<tail->data<<" ";
    //     tail = tail->next;
    // }

    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail!= temp);
    // we started from tail and traverse all nodes, we go around and come back to tail then we stop there "tail!=temp" 
    cout<<endl;
}

void deleteNode(Node* &tail, int value){
    //empty list
    if(tail==NULL){
        cout<<"List is empty "<<endl;
        return;
    }
    else{
        //non-empty
        //assuming that "value" is present in list
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value ){
            prev = curr;
            curr= curr->next;
        }

        prev->next = curr->next;

        //1 Node Linked list
        if(curr==prev){
            tail=NULL;
        }

        //>=2 Node linked list
        else if(tail==curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;

    }
}

bool isCircular(Node* head){
     // Write your code here.
    if(head==NULL){
        return true;
    }
    Node* temp = head->next;
    
    while(temp!=head && temp!=NULL){
        temp=temp->next;
    }

    //for more than 2 nodes
    if(temp==head){
        return true;
    }
    return false;
}

//using map
bool detectLoop(Node* head){
    if(head==NULL){
        return false;
    }

    map<Node*, bool> visited;

    Node* temp=head;
    while(temp!=NULL){

        if(visited[temp]==true){
            //cycle present
            cout<<"Loop Present at "<<temp->data<<endl;
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}


int main()
{
    Node* tail = NULL;

    //empty list me insert
    // insertNode(tail, 5,3);
    // print(tail);
    // insertNode(tail,3,5);
    // print(tail);
    // insertNode(tail,5,7);
    // insertNode(tail,7,9);
    // print(tail);

    // insertNode(tail,5,6);
    // print(tail);
    // insertNode(tail,3,4);
    // print(tail);
    // cout<<"After Deletion"<<endl;
    // deleteNode(tail,3);
    // print(tail);

    //for isCircular()
    insertNode(tail,5,1);
    insertNode(tail,1,2);
    insertNode(tail,2,5);
    insertNode(tail,5,4);
    insertNode(tail,4,3);
    insertNode(tail,3,8);
    insertNode(tail,8,5);
    print(tail);

    bool res = isCircular(tail);
    if(res){
        cout<<"Circular List ";
    }else{
        cout<<"Not Circular";
    }
    cout<<endl;
    bool isLoopPresent = detectLoop(tail);
    if(isLoopPresent){
        cout<<"Loop Present";
    }else{
        cout<<"No loop present";
    }
    return 0;

}