#include<iostream>
using namespace std;

// With two pointer i&j
/*string reverse(string& str,int i , int j){

    //base case 
    if(i>j){
        return;
    }

    swap(str[i],str[j]);
    //i++;
    //j--;

    reverse(str,i+1,j-1);
    
}*/


//With only one pointer i
string reverse(string& str,int i ){

    //base case 
    if(i>str.length()/2){
        return str;
    }

    swap(str[i],str[str.length()-1-i]);
    //i++;
    //str.length()-1-i-1;
    //j--;

    reverse(str,i+1);
    
}


int main(){
    string name ="SPARSH";


   // reverse(name,0,str.length()-1);
   reverse(name,0);
   
 
    cout<<name;

}