#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int maxo=arr[0],sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        maxo=max(sum,maxo);
        if(sum<0)
        sum=0;
    }
    cout<<maxo<<endl;

}