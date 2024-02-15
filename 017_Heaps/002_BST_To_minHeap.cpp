#include<iostream>
#include<vector>
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

void inorder(Node* root, vector<int> &ans)
{
	// base case
	if(root==NULL)
	{
		return;
	}

	inorder(root->left, ans);
	ans.push_back(root->data);
	inorder(root->right, ans);
}

void preorderFill(Node* root, int &index, vector<int> &ans)
{
	if(root==NULL)
	{
		return;
	}

    cout<<root->data<<" ";
	root->data=ans[index++];
	preorderFill(root->left, index, ans);
	preorderFill(root->right, index, ans);
}

Node* convertBST(Node* root)
{
	vector<int> ans;
	inorder(root, ans);

	int index=0;
	preorderFill(root, index, ans);

	return root;
}



int main()
{
  
    Node* root = NULL;   
    cout<<"Enter data to create bst"<<endl;
    takeInput(root);

    vector<int> inorderAns;
    
    
    inorder(root, inorderAns);
    cout<<endl;
    

    cout<<"Preorder traversal"<<endl;
    convertBST(root);
    return 0;
}
//4 2 6 1 3 5 7 -1