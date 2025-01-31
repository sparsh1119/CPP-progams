#include<iostream>
using namespace std;

void print(int arr[],int size){
    cout<<"Size of array is "<<size<<endl;

    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool linearsearch(int arr[], int size, int key){
    print(arr,size);
    if(size==0){
        return false;
    }

    if(arr[0]==key){
        return true;
    }
    else{
        bool remainingPart=linearsearch(arr+1,size-1,key);
        return remainingPart;
    }
}

int main(){

    int size=5;
    int arr[5]={3,5,1,2,6};
    int key=2;

    bool ans= linearsearch(arr, size, key);


    if(ans){
        cout<<"Present";
    }
    else{
        cout<<"Absent";
    }
}