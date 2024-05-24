#include<iostream>
using namespace std;

void reachHome(int src,int dest){

    cout<<"Current location "<<src<<" Destination "<<dest<<endl;

    //base case
    if(src==dest){
        cout<<"Reached Destination";
        return ;
    }

    //processing
    src++;

    //recusive relation
    reachHome(src,dest);
}

int main(){
    int src, dest;
    cin>>src>>dest;
    cout<<"Source : "<<src<<endl;
    cout<<"Destination : "<<dest<<endl;

    reachHome(src, dest);

    return 0;
}