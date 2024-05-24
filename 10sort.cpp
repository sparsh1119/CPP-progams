#include<iostream>
using namespace std;

/*void sortone(int arr[], int n){
    int left =0, right = n-1;
    while (left<right)
    {
        while (arr[left]==0 && left<right)
        {
            left++;
        }
        while (arr[right]==1 && left<right)
        {
            right--;

        }
        if (left<right)
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        
    }
    
}*/
void sort012(int a[], int n)
    {
        int low=0;
        int mid=0;
        int high=n-1;
        
        while(mid<=high){
            switch(a[mid]){
                case 0:
                swap(a[low],a[mid]);
                low++;
                mid++;
                break;
                
                case 1:
                mid++;
                break;
                
                case 2:
                swap(a[mid], a[high]);
                mid++;
                high--;
                break;
            }
        }
    }


void printArray(int arr[],int n){
    for (int  i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[10] ={1,1,0,0,2,0,2,0,1,0};

    sort012(arr,10);
    printArray(arr,10);

}