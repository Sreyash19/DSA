#include<iostream>
#include<queue>
#include<stack>

//Inorder, Preorder And Postorder iterative
//(Through recursion in 001 file)
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildTree(node* root){

    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    //for null we use -1 so when we put -1 it means null
    if(data == -1){
        return NULL;
    }

    //left runs until we enter -1
    //when we enter -1 it goes to right of node
    cout<<"Enter data for inserting in left "<<data <<endl;
    root->left = buildTree(root->left);

    //when we enter -1 here then it goes to parent node
    cout<<"Enter data for inserting in right "<<data <<endl;
    root->right = buildTree(root->right);
    
    return root;

}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);  //seperator so that we can print in tree structure

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            //old level complete traversed
            cout<<endl;

            //check if there are further child are or not;
            if(!q.empty()){
                //queue still has some child nodes
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }

    }
}

//preorder iterative
void preorder(node* root){
    //Node Left Right
    if(root==NULL){
        return;
    }

    stack<node*> s;
    s.push(root);
    
    while(!s.empty()){
        node* temp = s.top();
        s.pop();
        cout<<temp->data<<" ";

        //push right child
        if(temp->right){ //child node present on right
            s.push(temp->right);
        }
        
        //push left child
        if(temp->left){ //child node present on left
            s.push(temp->left);
        }
        //to ensure that left is handled first the riht child is pushed first as stack is LIFO
    }
}

void inorder(node* root){
    stack<node*> s;
    node* temp = root;

    while(temp != NULL || s.empty() == false ){
        //reach left most node
        while(temp != NULL){
            s.push(temp);
            temp = temp->left;
        }

        //temp is NULL at this point so we make temp to top
        temp= s.top();
        s.pop();
        cout<<temp->data<<" ";

        //we visited node and its left subtree now its right
        temp=temp->right;
    } 
}

void postorder(node* root){
    stack<node*> s;
    node* curr = root;
    node* prev = NULL;
    while(curr != NULL || !s.empty()){
        if(curr!=NULL){
            //push curr on stack
            s.push(curr);
            curr= curr->left;
        }
        else{
             //when curr become NULL we reach in this else and we move curr to top of stack
            curr= s.top();

            //if( (curr->right null so no node present on right ) || (curr->right prev means we have visited that node the right one so no need to go again))
            //as we go to a node and print it we mark it prev
            if(curr->right == NULL ||curr->right == prev){
                cout<<curr->data<<' ';
                s.pop();
                prev= curr;
                curr=NULL;
            }
            else{
                curr=curr->right;
            }
        }
    }
   
}

int main()
{
    node* root = NULL;

    //creating a tree
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    //level order 
    //Printing level order traversal
    cout<<"Printing the level order traversal output "<<endl;
    levelOrderTraversal(root);

    cout<<"Preorder ";
    preorder(root);
    cout<<endl;
    cout<<"Inorder ";
    inorder(root);
    cout<<endl;
    cout<<"Postorder ";
    postorder(root);
    return 0;
}