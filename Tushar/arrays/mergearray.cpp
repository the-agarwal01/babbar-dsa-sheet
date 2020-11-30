#include<bits/stdc++.h>
using namespace std;
//Method 1 below only problem is if n>m then n contains the larger array and m smaller one so print m then n 
// Also refer gap mwthod givwn in takeUfwd
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    int i=0;
	    if(n<m || n==m)
	    {
	   while(i<n)
	   {
	   if(arr1[i]<arr2[0]){
	   ++i;}
	   swap(arr1[i],arr2[0]);
	   sort(arr2,arr2+m);
	   ++i;
	   }
       sort(arr1,arr1+n);
       for(int i=0;i<n;i++)
       cout<<arr1[i]<<" ";
       for(int i=0;i<m;i++)
       cout<<arr2[i]<<" ";
	    }
	    else
	    {
	   while(i<m)
	   {
	   if(arr2[i]<arr1[0]){
	   ++i;}
	   swap(arr2[i],arr1[0]);
	   sort(arr1,arr1+n);
	   ++i;
	    }
        sort(arr2,arr2+m);
        for(int i=0;i<m;i++)
       cout<<arr2[i]<<" ";
       for(int i=0;i<n;i++)
       cout<<arr1[i]<<" ";
	    }
        
	}
};
int main()
{
    int n,m;
    cin>>n>>m;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++)
    cin>>arr1[i];
    for(int i=0;i<m;i++)
    cin>>arr2[i];
    Solution s;
    s.merge(arr1,arr2,n,m);

}
