#include "bits/stdc++.h"
using namespace std;


class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
Node* kReverse(Node* head, int k)
{
    //Iterative Approach 
    if(head==NULL || head->next==NULL){
        return head;
    }

    Node* prev= NULL;
    Node* curr= head;
    Node* forward = NULL;

    while(curr != NULL){
        forward=curr->next;
        curr->next=prev;
        prev= curr;
        curr= forward;
    }
    return prev;  //because prev is now pointing the LL.
    
}

int main(){
    Node*=
}