#include<iostream>
using namespace std;

void print(int arr[],int s, int e){
    cout<<"Size of array is "<<endl;

    for(int i=s; i<=e;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool binarySearch(int arr[],int s, int e, int key){

    print(arr,s,e);


    int mid= s+(e-s)/2;

    //base cases
    //for not present
    if(s>e){
        return false;
    }
    //for present
    if(arr[mid]==key){
        return true;
    }

    

    if(arr[mid]<key){
        return binarySearch(arr,mid+1,e,key);
    }
    else{
        return binarySearch(arr,s,mid-1,key);
    }
}

int main(){
    int size=6;
    int arr[6]={2,4,5,6,7,9};
    //array shold be so
    int key = 6;

    cout<<"Present or Not "<< binarySearch(arr, 0,5, key);

    
}