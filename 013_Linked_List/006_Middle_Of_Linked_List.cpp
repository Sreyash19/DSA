#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }
};
void InsertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head= temp;
} 
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

//Return length of linked list
int getLength(Node* head){
    int len = 0;
    while(head != NULL){
        len++;
        head = head->next;
    }
    return len;
}

Node* getMiddle(Node* head){
    if(head==NULL || head->next == NULL){
        return head;
    }

    //2Nodes - needed or not?
    if(head->next->next ==NULL){
        return head->next;
    }

    Node* slow = head;
    Node* fast = head->next;
    while(fast!= NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast= fast->next;
        }

        slow = slow -> next;
    }
    return slow;

}

Node *findMiddle(Node *head) {
    //optimized solution
    return getMiddle(head);


    /*
    int len = getLength(head);
    int ans = (len/2);

    Node* temp = head;
    int cnt = 0;
    while(cnt<ans){
        temp=temp->next;
        cnt++;
    };
    return temp;
    */
}

 
 
int main()
{
    Node* newNode = new Node(10);
    Node* head = newNode;
    InsertAtHead(head,15);
    InsertAtHead(head,3);
    InsertAtHead(head,7);
    InsertAtHead(head,12);
    InsertAtHead(head,9);
    print(head);
     
    Node* middleNode = findMiddle(head);
    cout<<middleNode->data<<endl;
     

    return 0;
}