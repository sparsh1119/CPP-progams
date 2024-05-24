#include<iostream>
using namespace std;
 
int print(int arr[],int n){
       for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void bubbleSort(int arr[],int n){

    print(arr,n);
    cout<<endl;
    //base case
    if(n==0||n==1){
        return ;
    }

    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
        
    }


    bubbleSort(arr,n-1);

    
}

int main(){
    int arr[5]={10,22,1,3,6};

    bubbleSort(arr,5);

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
     
}