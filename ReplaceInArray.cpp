#include <bits/stdc++.h>
using namespace std;


int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<string> ans;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 3 == 0 and arr[i] % 5 == 0)
        {
            ans.push_back("ThreeFive");
        }
        else if (arr[i] % 3 == 0)
        {
            ans.push_back("Three");
        }
        else if (arr[i] % 5 == 0)
        {
            ans.push_back("Five");
        }
        else
        {
            ans.push_back(to_string(arr[i]));
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}