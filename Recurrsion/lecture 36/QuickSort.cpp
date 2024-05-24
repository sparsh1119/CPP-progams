#include<iostream>
using namespace std;


int partition(int arr[],int s,int e){

    int pivot = arr[s];

    int count =0;
    for (int i = s+1; i <= e; i++)
    {
        if (arr[i]<=pivot)
        {
            count++;
        }
    }
    
    int pivotIndex =s+count;
    swap(arr[pivotIndex],arr[s]);

    //left aur right part dekhna hota hai
    //left part should be smaller and right part should be bigger
    
    int i=s,j=e;

    while (i<pivotIndex && j>pivotIndex)
    {
        while (arr[i]<=pivot)
        {
            i++;
        }
        while (arr[j]>=pivot)
        {
            j--;
        }
        
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
        
    }
    
    return pivotIndex;
}

void quickSort(int arr[],int s,int e){
    //base case
    if(s>=e){
        return;
    }

    //dividing array partition kerna
    int p=partition(arr,s,e);

    //for Sorting left part
    quickSort(arr,s,p-1);

    //for Sorting right part
    quickSort(arr,p+1,e);
}

int main(){
    int arr[5]={9,7,3,8,6};
    int n=5;

    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}