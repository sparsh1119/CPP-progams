//Check If The String Is A Palindrome??
//CODE STUDIO

#include <bits/stdc++.h>
using namespace std;
// to change capital letter to lower case
char toLowerCase(char ch)
{

    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

// to remove all symbols and whitespaces from string and creating totally new string
string filterString(string s)
{

    string str = ""; // initializing blank string
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        { // only taking inputs as small laters
            str.push_back(s[i]);
        }
        if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= '0' && s[i] <= '9')
        {                                // taking input as upper case and numbers
            char ch = toLowerCase(s[i]); // changing every upper case to lower case
            str.push_back(ch);
        }
    }
    return str;
}

bool checkPalindrome(string s)
{
    // adding new string here
    string sr = filterString(s); // changing old string to new
    int n = sr.size();           // new string size
    int start = 0;
    int end = n - 1;

    while (start < end)
    {

        if (sr[start] != sr[end])
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}
int main()
{
    string text;
    cout << "Type your text: ";
    getline(cin, text);


    cout << "paindrome or not : "<< checkPalindrome(text);
}