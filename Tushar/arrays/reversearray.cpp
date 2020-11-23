#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    //Method 1.
    // int n;//size of the array
    // cout<<"Enter the number of elements in the array:\n";
    // cin>>n;
    // int arr[n];
    // cout<<"Enter the elemnts\n";
    // for(int i=0;i<n;i++)
    // cin>>arr[i];
    // reverse(arr,arr+n);
    // cout<<"Reversed Array is:\n";
    // for(int i=0;i<n;i++)
    // cout<<arr[i]<<" ";

    //Method 2.Either iterative or recursive
    int n;//size of the array
    cout<<"Enter the number of elements in the array:\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:\n";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int start=0,end=n-1,temp;
    while(start<end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        ++start;
        --end;
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";


    












    return 0;
}