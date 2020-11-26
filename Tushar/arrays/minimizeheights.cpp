#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int getminDiff(int arr[],int n,int k)
    {
        sort(arr,arr+n);
        int ans=arr[n-1]-arr[0];
        int min,max;
        for(int i=0;i<n-1;i++)
        {
            max = std::max(arr[i]+k, arr[n-1] - k);
            min= std::min(arr[0]+k, arr[i+1] - k);
            ans = std::min(ans, max - min);
        }
        return ans;
    }
};
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<Solution().getminDiff(arr,n,k);
}