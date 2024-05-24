#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long int sqRtInt(int n){
    int s=0;
    int e=n;
   long long int mid=s+(e-s)/2;
   long long int ans=-1;

    while(s<=e){
       long long int square  = mid*mid;
        if(square==n)
        return mid;
        
        if(square<n){
            ans=mid;
         if(square<n){
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid=s+(e-s)/2;

    }
//return sqrt(n);
}return ans;
}

// double morePrecise(int n, int precision , int tempsol){
//     double factor =1;
//     double ans=tempsol;

//     for (int i = 0; i < precision; i++)
//     {
//         factor = factor/10;
//         for (double j = ans; j < j*j; j=j+factor)
//         {
//             ans=j;
//         }
        
//     }
//     return ans;
// }

int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;

    int tempsol = sqRtInt(n);

    //cout<<"Answer is "<<morePrecise(n, 3,tempsol)<<endl;
    cout<<"Answer is "<<sqRtInt(n)<<endl;


    return 0;
}