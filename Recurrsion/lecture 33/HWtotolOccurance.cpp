#include<iostream>
using namespace std;

int binarySearch(int arr[], int s,int e, int key){
    
    int mid=s+(e-s)/2;

    //BASE CASE
    if(s>e){
        return -1;
    }
    if(arr[mid]==key){
        return mid;
    }

    //recursion call
    if(arr[mid]<key){
        return binarySearch(arr,mid+1,e,key );
    }
    if (arr[mid]>key){
        return binarySearch(arr, s,mid-1,key);
    }
}


int countOccurence(int arr[],int n,int key){
    int indices = binarySearch(arr, 0, n-1, key);

    if(indices==-1){
        return 0;
    }

    int count =1;

    //couting similar element on the left side
    int left = indices -1;
    while (left>=0 && arr[left]==key)
    {
        count++,left--;
    }


    //couting similar element on the right side
    int right= indices+1;
    while (right<=n&&arr[right]==key)
    {
        count++, right++;
    }


    return count;
    
}



int main(){
    int arr[11]={1,2,3,4,4,4,4,4,4,4,5,};
    int size=11;
    int key =4;

    cout<<"Total numrber of occurence of "<<key<<" is "<<countOccurence(arr,11,4);
}