#include <iostream>
using namespace std;

class Node {
   public:
  int data;
  Node* next;
};

int main(){
Node* head;
Node* one= NULL;
Node* two= NULL;
Node* three= NULL;
//Allocating 3 nodes in heap
one = new Node();
two = new Node();
three= new Node();

//Assigning values
one->data=1;
two->data=2;
three->data=3;

//Connecting nodes
one->next=two;
two->next=three;
three->next=NULL;

//Printing linked list data
head = one;
while(head != NULL){
    cout<<head->data;
    head=head->next;
}
}
