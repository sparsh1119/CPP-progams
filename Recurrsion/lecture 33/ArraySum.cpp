#include<iostream>
using namespace std;


int getSum(int arr[],int size){
    //base case
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }

    int remaingPart=getSum(arr+1,size -1);
    int sum = arr[0]+remaingPart;
    return sum;
}


int main(){
    
    int size;
    cin>>size;
    
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int sum = getSum(arr,size);
    cout<<"Sum of Array is "<<sum;



}