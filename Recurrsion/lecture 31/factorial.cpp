#include<iostream>
using namespace std;

int factorial(int n){
    //Base Condition of Recurrsion
    if(n==0){
        return 1;
    }

    //recurrsive relation
    //int smallerProblem = factorial(n-1);
    //int bigProblem = n*smallerProblem;
    //return bigProblem; 
    //ye bas samjne k liye tha baki direct return ker skte hai


    return n * factorial(n-1);

}

int main(){
    int n;
    cin>>n;

    int ans=factorial(n);
    cout<<ans<<endl;

    return 0;
}