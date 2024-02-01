#include<iostream>
#include<queue>
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
    cout<<"Enter data for inserting in left of "<<data <<endl;
    root->left = buildTree(root->left);

    //when we enter -1 here then it goes to parent node
    cout<<"Enter data for inserting in right of "<<data <<endl;
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

//inorder, preorder and postorder using recursion
void inorder(node* root){
    //base case
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node* root){
    //base case
    if(root==NULL){
        return;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root){
    //base case
    if(root==NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

//taking inputs level wise and making tree
void buildFromLevelOrder(node* &root){
    queue<node*> q;
    cout<<"Enter data for root "<<endl;
    int data;
    cin>>data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"Enter left node for "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter right node for "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main()
{
    node* root = NULL;

    buildFromLevelOrder(root);
    levelOrderTraversal(root);
    //1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    /*
    //creating a tree
    root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    //level order 
    //Printing level order traversal
    cout<<"Printing the level order traversal output "<<endl;
    levelOrderTraversal(root);

    cout<<"Inorder ";
    inorder(root);
    cout<<endl;
    cout<<"Preorder ";
    preorder(root);
    cout<<endl;
    cout<<"Postorder ";
    postorder(root);
    */

    
    return 0;
}