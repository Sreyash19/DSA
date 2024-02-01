#include<iostream>
#include<queue> //for traversal
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int d){
        this->data = d;
        this->left =NULL;
        this->right =NULL;
    }
};

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);  //seperator so that we can print in tree structure

    while(!q.empty()){
        Node* temp = q.front();
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

//Insertion in BST
Node* insertIntoBST(Node* root, int d){
    //base case
    if(root == NULL){
        //in starting root is NULL now when its null means first element is there so we put d in it
        root = new Node(d);
        return root;
    }

    if(d > root->data){
        //right part
        root->right = insertIntoBST(root->right, d);
    }else{
        //left part
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}

void takeInput(Node* & root){
    int data;
    cin>>data;
    while(data != -1){
        root = insertIntoBST(root, data);
        cin>> data;
    }
}

Node* minVal(Node* root){
    Node* temp=  root;

    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}
Node* maxVal(Node* root){
    Node* temp=  root;

    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}

Node* deleteFromBST(Node* root, int val){
    //base case
    if(root==NULL){
        return root;
    }
    if(root->data == val){
        //0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        
        //1 child

        //left child
        if(root->left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        //right child
        if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        //2 child
        if(root->left != NULL && root->right != NULL){
            int mini = minVal(root->right) ->data;
            root->data =  mini; // also can do with max if we choose to get value form left of root or nodeToDelete
            
            //now delete the value we copied into root as now we dont need that 
            root->right = deleteFromBST(root->right, mini);
            return root;
        }
    
    }
    else if(root->data > val){
        //left me jao
        root->left = deleteFromBST(root->left, val);
        return root;
    }
    else{
        //right me jao
        root->right = deleteFromBST(root->right, val);
        return root;
    }

}

int main()
{
    Node* root = NULL;   
    cout<<"Enter data to create bst"<<endl;
    takeInput(root);

    cout<<"Printing BST"<<endl;
    levelOrderTraversal(root);

    //Search In BST is solved in CodeStudio

    cout<<"Min value is "<<minVal(root)->data<<endl;
    cout<<"Max value is "<<maxVal(root)->data<<endl;

    //Deletion
    cout<<"After Deletion"<<endl;
    root= deleteFromBST(root, 30);

    cout<<"Printing BST"<<endl;
    levelOrderTraversal(root);


    cout<<"Min value is "<<minVal(root)->data<<endl;
    cout<<"Max value is "<<maxVal(root)->data<<endl;
    return 0;
}