#include<iostream>
using namespace std;



//With two pointer Approch
bool checkPalindrome(string str , int i , int j){

    //base case
    if(i>j){
        return true;
    }

    if(str[i]!=str[j]){
        return false;
    }
    else{
        checkPalindrome(str,i+1,j-1);
    }
}



int main(){
    string name = "babbar";

    
    if (checkPalindrome(name,0,name.length()-1))
    {
        cout<<"Yes Palindreome";
    }
    else{
        cout<<"Not a Palindrome";
    }
    


}
/*
//with Single Pointer
bool checkPalindrome(string str , int i ){

    //base case
    if(i>str.length()/2){
        return true;
    }

    if(str[i]!=str[str.length()-i-1]){
        return false;
    }
    else{
        checkPalindrome(str,i+1);
    }
}



int main(){
    string name = "aabbaa";

    
    
    if (cout<<checkPalindrome(name,0);)
    {
        cout<<"Yes Palindreome";
    }
    else{
        cout<<"Not a Palindrome";
    }
    


}*/