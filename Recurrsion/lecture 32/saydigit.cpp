#include<iostream>
using namespace std;

void sayDigit(int n,string arr[]){

    //base case
    if(n==0)
        return;

    //processing
    int digit= n%10;
    n=n/10;

    //recursion call
    sayDigit(n,arr);

    cout<<arr[digit]<<" ";


}

int main(){
        
    string arr[10]={"Zero", "One" ,"Two" ,
                    "Three", "Four" ,"Five" ,
                    "Six" ,"Seven" ,"Eight" ,"Nine"};

    int n;
    cin>>n;

    cout<<endl;
    sayDigit(n, arr);
    cout<<endl<<endl;


    return 0;
}