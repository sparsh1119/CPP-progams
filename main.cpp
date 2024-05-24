// wap to tel given character is in uppercase , lowercse ou numeric
/*
#include <iostream>
using namespace std;
int main (){
char ch;
	cin>>ch;

	if (ch >= 'a' && ch <= 'z'){
		cout<<"ch is lower case ";

	}

   else if (ch >= 'A' && ch <= 'Z'){
	cout<<"ch is upper case ";
}
	else{
		cout<<" ch is numeric";
	}

}*/

// wap to find sum of all even numbers
/*
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "enter the value n : ";
	cin >> n;
	int sum = 0;
	int i = 1;

	while (i <= n)
	{
		if (i % 2 == 0)
		{
			sum = i + sum;
		}
		i++;
	}
	cout << "The sum is " << sum;
	return 0;
}*/

// wap to convert feranite to celisius
/*
#include<iostream>
using namespace std;

 int main(){
	double f,c;
	cout<<"Enter the temerature in fahrenheit"<<endl;
	cin>>f;
	c=(f-32)*5/9;
	cout<<"Temerature in celsius = ";
	cout<<c<<endl;
	return 0;


 }
 
// wap to find the given number is prime or not
#include<iostream>
using namespace std;

int main()
{
	int n;
		cin >> n;

	int i = 2;

	while (i < n)
	{
		if (n % i == 0)
		{
			cout << "Not Prime for " <<i<< endl;
		}
		else
		{
			cout << "Prime for " <<i<< endl;
		}

		i= i+1;
	}
	
} */

