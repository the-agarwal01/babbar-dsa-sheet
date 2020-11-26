#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    int getAnswer(int arr[],int n)
    {
        unordered_set<int> s;
        for(int i=0;i<n;i++)
        {
            if(s.find(arr[i])==s.end())
            s.insert(arr[i]);
            else
            return arr[i];
            
        }
        return -1;
    }
};
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    Solution s;
    cout<<s.getAnswer(arr,n);
    
    
    
    
    return 0;
}