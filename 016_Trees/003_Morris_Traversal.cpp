#include<iostream>
 //Here traverse without using recursion and stack
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

void MorrisTraversal(node* root){
    node *current, *pred;
    if(root==NULL){
        return;
    }

    current = root;
    while(current!=NULL){
        if(current->left == NULL){
            cout<<current->data<<" ";
            current = current->right;
        }
        else{

            //finding inorder predecessor of current
            pred = current->left;
            while(pred->right!=NULL && pred->right!=current){
                pred=pred->right;
            }

            //making temp link to keep track
            if(pred->right ==NULL){
                pred->right = current;
                current = current->left;
            }
            else{
                //removing link
                pred->right==NULL;
                cout<< current->data<<" "; //print right subtree/node
                current= current->right;

            }
        }
    }
}

int main(){
    node* root;
    node*  treeRoot = buildTree(root);
    //1 2 4 -1 -1 5 -1 -1 3 -1 -1
    cout<<"Inorder using morris traversal"<<endl;
    MorrisTraversal(treeRoot);
    return 0;
}