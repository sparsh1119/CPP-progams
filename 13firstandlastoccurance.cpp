#include <iostream>
using namespace std;

int firtOccurance(int arr[], int size, int key)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1; /*right me jao*/
        }
        else if (key < arr[mid])
        {
            e = mid - 1; // left me search kerna
        }
        mid = s + (e-s) / 2;
    }
    return ans;
}

int lastOccurance(int arr[], int size, int key)
{
    int s = 0, e = size - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid])
        {
            s = mid + 1; /*right me jao*/
        }
        else if (key < arr[mid])
        {
            e = mid - 1; // left me search kerna
        }
        mid = s + (e-s) / 2;
    }
    return ans;
}

int main()
{

    int A[8] = {1, 2, 3, 4, 4, 4, 4, 5};

    cout << "First Occurance of 4 is at Index number  " << firtOccurance(A, 8, 4) << endl;
    cout << "Last Occurance of 4  is at Index number " << lastOccurance(A, 8, 4) << endl;
}