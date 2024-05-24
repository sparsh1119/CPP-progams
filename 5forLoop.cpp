/*#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Number ";
    cin>>n;

    /*for (int i = 1; i <= n; i++)
    {
        cout<< i<<endl;
    }*/

/* int i = 1;
 for ( ; ; )
 {
     if (i <=n){
         cout<<i<<endl;
     }


     else{
         break;
     }
     i++;
 }


}*/

// wap to find the sum up to n number
/*#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number ";
    cin>>n;

    int sum =0;

    for (int i = 1; i <=n; i++)
    {
        sum +=i;

    }
        cout<<sum<<endl;


}

 //wap to print fibonacciseries

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a=0;
    int b=1;
    cout<< a<<" "<<b <<" ";

    for (int i = 1; i <=n; i++)
    {
        int next_number =a+b;
        cout<<next_number<<" ";
        a=b;
        b=next_number;

    }

}

// wap to tell number n is prime or not ?
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number ";
    cin >> n;

    bool isprime=1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isprime = 0;
            break;
        }
    }
    if (isprime == 0)
    {
        cout << "Number is not prime ";
    }
    else
    {
        cout << "Number is prime";
    }
}*/

