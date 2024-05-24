/*
// Wap to print * in same matrix
#include<iostream>
using namespace std;

int main (){
    int n;
    cin>>n;

    int i=0;
    while (i<n)
    {
        int j=0;
        while (j<n)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }

}

//wap to print  pattern
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i =1;
    while (i<=n)
    {
        int j=1;
        while(j<=n){
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;

    }

}



#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<n-j+1;
            j++;
        }
        cout<<endl;
        i++;

    }

}


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    int count = 1;
    while (i <= n)
    {

        int j = 1;
        while (j <= n)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while (i<=n)
    {
        int j =1;
        while (j<=i)
        {
            cout<<"* ";
            j++;
        }
        cout<<endl;
        i++;

    }

}

#include<iostream>
using namespace std;

 int main(){

     int n;
     cin>>n;

     int row =1;
     while (row<=n)
     {
        int col =1;
        while (col<=row)
        {
            cout<<row<<" ";
            col++;
        }
        cout<<endl;
        row++;

     }

 }

 #include<iostream>
 using namespace std;

 int main(){
    int n;
    cin>>n;

    int  row=1;
    int count =1;
    while (row<=n)
    {
        int col=1;
        while (col<=row)
        {
            cout<<count<<" ";
            count++;
            col++;
        }
        cout<<endl;
        row++;

    }

 }

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        int value = row;
        while (col <= row)
        {
            cout << value << " ";
            value++;
            col++;
        }

        cout << endl;
        row++;
    }
}


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    while (row<=n)
    {
        int col =row;
        while (col<row*2)
        {
            cout<<col<<" ";

            col++;
        }
        cout<<endl;
        row++;
    }

}

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row=1;
    while (row<=n)
    {
        int col=1;
        while (col<=row)
        {
            cout<<row-col+1<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }

}
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row=1;

    while (row<=n)
    {
        int col=1;
        while (col<=n)
        {
            char ch ='A'+ row -1;
            cout<<ch <<" ";
            col++;
        }
        cout<<endl;
        row++;

    }

}


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;

    while (row<=n)
    {
        int col =1;
        while (col<=n)
        {
            char ch ='A'+col -1;
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;

    }

}


#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int row = 1;
    char start = 'A';
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {

            cout << start << " ";
            start++;
            col++;
        }
        cout << endl;
        row++;
    }
}


#include<iostream>
using namespace std;
 int main(){
    int n;
    cin>>n;

    int row =1;
    while (row<=n)
    {
        int col=1;
        while (col<=n)
        {
            cout<<row+col-1<<" ";
            col++;
        }
        cout<<endl;
        row++;

    }

 }


#include<iostream>
using namespace std;
 int main(){
    int n;
    cin>>n;

    int row =1;
    while (row<=n)
    {
        int col=1;
        while (col<=n)
        {
            char ch = 'A' + row+col-2;
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;

    }

 }
  #include<iostream>
  using namespace std;

  int main(){
    int n;
    cin>>n;

    int row=1;
    while (row<=n)
    {
        int col=1;
        while (col<=row)
        {
            char ch ='A' +row -1;
            cout<<ch <<" ";
           // ch++;
            col++;
        }
        cout<<endl;
        row++;
    }

  }

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    char ch = 'A';

    while(row <= n)
    {
        int col = 1;
        

            while(col<=row)
        {
            cout << ch << " ";
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }
}


#include<iostream>
using namespace std;
int main()

{
    int n;
    cin>>n;

    int row =1;
    while (row<=n)
    {
        int col=1;
       
        while (col<=row)
        {
            char ch='A'+row+col-2;
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;
        

    }
    
} 

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    while (row<=n)
    {
        int col=1;
        char ch= 'A' +n -row;
        while (col<=row)
        {
            
            cout <<ch<<" ";
            ch++;
            col++;

            
        }
        cout<<endl;
        row++;
        
    }
    
}


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int row=1;
    while (row<=n)
    {
        int col=1;
        char ch='A'+row-col;
        while (col<=n)
        {
            cout<<ch<<" ";
            ch++;
            col++;

        }
        cout<<endl;
        row++;
    }

    
}

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    while (row<=n)
    {
        int space=n -row;
        while(space){
            cout<<" ";
            space--;
        }

        int col=1;
        while (col<=row)
        {
            cout<<"*";
            col++;

        }
        cout<<endl;
        row++;
    }
    
}


#include<iostream>
using namespace std;

int main (){
    int n;
    cin>>n;

    int row=1;
    while (row<=n)
    {
        int col=1;
        
        while (col<=n-row+1)
        {
            cout<<"*";
            col++;
        
        }
        cout<<endl;
        row++;
    }
    
}


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    while (row<=n)
    {
        int space=row-1;
        while(space){
            cout<<" ";
            space--;
        }

        int col=1;
        while (col<=n-row+1)
        {
            cout<<"*";
            col++;

        }
        cout<<endl;
        row++;
    }
    
}


#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int  row=1;
    while (row<=n)
    {
        int space=1;
        while (space<row)
        {
            cout<<" ";
            space++;
        }

        int col =1;
        while (col<=n-row+1)
        {
            
            cout<<row;
            col++;
        }
        
        cout<<endl;
        row++;
    }
    
    
} 

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row=1;

    while (row<=n)
    {
        int space=1;
        while (space<=n-row)
        {
            cout<<" ";
            space++;
        }
        int col=1;
        while (col<=row)
        {
            cout<<row;
            col++;
        }
        cout<<endl;
        row++;
    }
    
}



#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int row=1;
    
    while (row<=n)
    {
        int space=1;
        while (space<row)
        {
            cout<<" ";
            space++;
        }
        int col=1;
        int value=row;
        while (col<=n-row+1)
        {
            cout<<value;
            value++;
            col++;
        }
        cout<<endl;
        row++;
        
    }
    
} // namespace std;



#include<iostream>
using  namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    int value = 1;
    while (row<=n)
    {
        int space=1;
        while (space<=n-row)
        {
            cout<<" ";
            space++;
        }

        int col=1;
        
        while (col<=row)
        {
            cout<<value;
            value++;
            col++;

        }
        cout<<endl;
        row++;

        
    }
    
}


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    while (row<=n)
    {
        int space=1;
        while(space<=n-row)
        { 
            cout<<" ";
            space++;
        }
        int col=1;
        while (col<=row)
        {
            cout<<col;
            col++;
        }

        col=row-1;
        while (col>=1)
        {
            cout<<col;
            col--;
        }
        
        cout<<endl;


        row++;
        
    }
    
}

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;
    while (row<=n)
    {
        int col=1;
        while (col<=n-row+1)
        {
            cout<<col<<" ";
            col++;
        }
        col=1;
        while (col<=(row-1)*2)
        {
            cout<<"* ";
            col++;
        }

        col=n-row+1;
        while (col>=1)
        {
            cout<<col<<" ";
            col--;
        }
        
        cout<<endl;
        row++;
        
    }
    
    
}