#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data ;
    node* left;
    node* right;

    node(int d){
        this ->data =d;
        this -> left = NULL;
        this ->right = NULL;
    }

};

node* buildTree(node* root){
    cout<<"Enter the data"<<endl;
    int data ;
    cin>>data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right= buildTree(root->right);
    return root;
}

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
    inOrder(root->left);
    inOrder(root-> right);
}

void postOrder(node* root){
    if(root == NULL){
        return; 
    }
    
    //LRN
    inOrder(root->left);
    inOrder(root-> right);
    cout<< root->data<<" ";
}

int main(){

    node* root =NULL;

    
    // 1 3 6 -1 -1 11 -1 -1 5 17 -1 -1  -1
    root = buildTree(root);

    cout<<"Printing the level of traversal "<<endl;
    levelOrderTraversal(root);
    
    cout<<"In Order Traersal :"; 
    inOrder(root);
    cout<<endl ;
    cout<<"Pre Order Traersal : ";
    preOrder(root);
    cout<<endl;
    cout<<"Post Order Traersal : ";
    postOrder(root);

    return 0;
}
