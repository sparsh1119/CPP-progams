#include<iostream>
using namespace std;

void print(int n){
    //base case
    if(n==0)
        return ;

    //print (n-1);
    //cout<<n<<endl;
    //this is head recursion as recursive relation is at the middle or top
    


    cout<<n<<endl;
    print (n-1);
    //this is tail recursion as recursive relation is at the end
    

}

int main(){
    int n;
    cin>>n;
    cout<<"\n" ;

    print(n);

    return 0;
}