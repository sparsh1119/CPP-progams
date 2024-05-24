#include<iostream>
using namespace std;

int main(){
    int t; 
    cin>>t;
    while(t--){
        int test=0;
        string str = "codeforces";
        char ch;
        cin>>ch;
        for (int i = 0; i < str.length-1; i++)
        {
            if (ch==str[i])
            {
                cout<<"yes"<<endl;
                test=1;
                break;
            }
            
        }
        if(test==0)
            cout<<"no"<<endl;
        

    }
}