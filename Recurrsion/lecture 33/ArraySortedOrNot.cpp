#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){

    //base case
    if(size==0||size==1)
    return true;

    if(arr[0]>arr[1])
    return false;

    else{
        bool remaingPart= isSorted(arr+1,size-1);
        return remaingPart;
    }
}

int main(){

    int arr[5]={1,4,5,6,8};
    int size=5;

    bool ans= isSorted(arr,size);

    if(ans){
        cout<<"Array is Sorted";
    }
    else{
        cout<<"Array is not Sorted";
    }
}