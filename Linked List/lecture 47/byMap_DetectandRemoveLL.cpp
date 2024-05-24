#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this->data =d;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next =NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

void insertNode(Node* &tail, int element , int d){
    //assuming that the element is presemt in the list

    //empty list
    if(tail==NULL){
        Node* newNode= new Node(d);
        tail = newNode;
        newNode->next =newNode;
    }
    else{
        //non empty list
        //assuming that the element id present in the list

        Node* curr = tail;
        while (curr->data != element)
        {
            curr= curr->next;
        }
        
        //element found -> curr is representing element wala node
        Node* temp= new Node(d);
        temp-> next= curr->next;
        curr->next=temp;
    }
}
void deleteNode(Node* &tail, int value){
    //empty list 
    if(tail==NULL){
        cout<<"List is empty,please check again"<<endl;
        return;
    }
    else{
        //non-empty
        //assuming that valur is present in the linked list

        Node* prev = tail;
        Node* curr = prev->next;

        while (curr->data !=value)
        {
            prev= curr;
            curr= curr-> next;
        }
        prev->next= curr->next;

        //1 Node Linked List
        if(curr==prev){
            tail==NULL;
    }
        //>=2Node LL
        else if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;



    }
}

void print (Node* tail){
    Node* temp = tail;

    if(tail==NULL){
        cout<<"List is EMPTY"<<endl;
        return;
    }


    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!= temp);
    cout<<endl;
} 

bool detectloop(Node* head){

    if(head== NULL){
        return false;
    }

    map<Node* , bool> visited;

    Node* temp = head;
    while (temp !=NULL )
    {

        //cycle is present
        if(visited [temp]== true){
            cout<<"Cycle is present on " << temp->data<<endl;
            return true;
        }

        visited[temp]= true;
        temp=temp->next;
    }
    return false;
    
} 



int main(){
    Node* tail=NULL;

    //empty list me insert wala p
    insertNode(tail,0,3);
    print(tail);
    insertNode(tail,3,5);
    print(tail);
    insertNode(tail,5,7);
    print(tail);
    insertNode(tail,7,9);
    print(tail);
    insertNode(tail,3,4);
    print(tail);
    insertNode(tail,5,6);
    print(tail);
    insertNode(tail,7,10);
    print(tail);
    insertNode(tail,9,10);
    print(tail);

    // deleteNode(tail,5);
    // print(tail);
    // cout<<endl;
    if(detectloop(tail)){
        cout<<"loop is present";
    }
    else{
        cout<<"Loop is not present";
    }


    return 0;

}
