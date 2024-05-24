#include<iostream>
using namespace std;

int binarySearch(int arr[] ,int size, int key){
    int start=0;
    int end=size-1;

    //int mid=(start +  end)/2;


    //agr int ki valu max se badi ho toh ye wala upar waal mid ka formula kaam nahi karega ;toh mid =  start +(end-start)/2 sab case k liye

    int mid =  start +(end-start)/2;
    while (start<=end)
    {
        if (arr[mid]==key)
        {
            return mid;
        }
        if (key>arr[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        //mid=(start + end)/2;
        mid =  start +(end-start)/2;
    }
    return -1;
}

int main(){

    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};

    int evenIndex = binarySearch(even, 6, 8);
    cout<<"Index of 8 in Even array is "<<evenIndex<<endl;

    int oddindex = binarySearch(odd, 5,8);
    cout<<"Index of 8 in Odd Array is "<<oddindex<<endl;



}