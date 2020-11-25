#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int left=0,right=n-1;
    while(left<=right)
    {
        while(arr[left]<0 && left<=right)
        left++;
        while(arr[right]>0 && right>=left)
        right--;
        if(left<=right)
        {
            int temp;
            temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++;
            right--;
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}