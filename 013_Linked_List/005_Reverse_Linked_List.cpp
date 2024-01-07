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

//Recursion Approach 2
//it will return head of the reverse list
Node* reverse1(Node* head){
    //base case
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* chotaHead = reverse1(head->next);
    head->next->next = head;
    head->next = NULL;

    return chotaHead;

}

//Recursion Approach 1
void reverse(Node* &head, Node* curr, Node* prev){
    //base case
    if(curr==NULL){
        head = prev;
        return;
    }
    Node* forward = curr->next;
    reverse(head,forward, curr);
    curr->next = prev;

}

//Revresing Linked list (Iterative Approach)
Node* reverseLinkedList(Node* &head)
{
    //Recursive 2
    return reverse1(head);

    /*
    //For recursive approach call
     Node* curr = head;
    Node* prev = NULL;
    reverse(head,curr,prev);
    return head;
*/

//Iterative Approach Code
/*
    // Write your code here
    if(head==NULL || head->next==NULL){
        return head;
    };

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr != NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
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
    Node* newHead = reverseLinkedList(head);
    cout<<"After Reversing Linked List "<<endl;
    print(newHead);

    return 0;
}