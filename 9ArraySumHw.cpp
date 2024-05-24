//Print sum of all element in an array
#include<iostream>
using namespace std;

int getSum(int arr[], int size){
    int sum =0;
    for (int i=0;i<size;i++){
        sum= sum+arr[i];
    }
    return sum;

}


int main(){
    int size;
    cout<<"Enter the size of an array ";
    cin>>size;

    int arr[100];
    cout<<"Array : ";
    for (int  i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    int sum = getSum(arr,size);
    cout<<"Sum of Array is "<<sum;


}