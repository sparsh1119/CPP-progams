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
        this->left = NULL;
        this->right = NULL;
    }

};
void levelOrderTraversal( node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node* temp = q.front();
        
        q.pop();

        if(temp == NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<< temp->data <<" ";
            if(temp -> left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
  
    }
    
}
void inOrder(node* root){ 
    if(root == NULL){
        return; 
    }
    //LNR
    inOrder(root->left);
    cout<< root->data<<" ";
    inOrder(root-> right);
}

void preOrder(node* root){
    if(root == NULL){
        return; 
    }
    //NLR
    cout<< root->data <<" ";
    preOrder(root->left);
    preOrder(root-> right);
}

void postOrder(node* root){
    if(root == NULL){
        return; 
    }
    
    //LRN
    postOrder(root->left);
    postOrder(root-> right);
    cout<< root->data<<" ";
}


node* insertIntoBST(node* &root,int d){
    //base case
    if(root==NULL){
        root = new node(d);
        return root;
    }

    if(d>root->data){
        root->right = insertIntoBST(root->right,d);
    }
    else{
        root->left = insertIntoBST(root->left,d);
    }
    return root;
}

void takeInput(node* &root ){
    int data;
    cin>>data;

    while(data!=-1){
        insertIntoBST(root,data);
        cin>>data;
    }
}

int main(){
    
    node* root =NULL;
    cout<<"Enter data to create BST"<<endl;
    takeInput(root);
    
    cout<<"BST for above data"<<endl;
    levelOrderTraversal(root);
    cout<<endl;

    cout<<"Inorder Traversal"<<inOrder(root)<<endl;
    cout<<"Preorder Traversal"<<preOrder(root)<<endl;
    cout<<"Postorder Traversal"<<postOrder(root)<<endl;
    return 0;

    
}