#include <iostream>
using namespace std;


char tolowercase(char ch){
    if (ch>='a'&& ch<='z')
    {
        return ch;
    }else{
        char temp= ch-'A'+'a';
        return temp;
    }
    
    
}

bool checkPaindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (tolowercase(a[s]) != tolowercase(a[e]))
        {
           return false;
        }
        else
        {
            s++;
            e--;
        }
    }return true;
}

int getlength(char a[])
{
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char word[20];

    cout << "Enter the word " << endl;
    cin >> word;

    int n = getlength(word);
    cout<<"length "<<n<<endl;

    cout << "Is above word is palindrome ?  " << checkPaindrome(word, n);
}