#include<iostream>
#include<algorithm>
using namespace std;
typedef struct pair
{
    int max;
    int min;
}Pair;
 Pair getminmax(int arr[],int low,int high)
{
    Pair minmax,ml,mh;
    int mid;
    if(low==high)
    {
        minmax.min=arr[low];
        minmax.max=arr[low];
        return minmax;
    }
    if(high==low+1)
    {
        if(arr[low]>arr[high])
        {
            minmax.min=arr[high];
            minmax.max=arr[low];
        }
        else
        {
            minmax.min=arr[low];
            minmax.max=arr[high];
        }
        return minmax;
    }
        
            mid=(low+high)/2;//If more than 2 elements
             ml=getminmax(arr,low,mid);
             mh=getminmax(arr,mid+1,high);
            if (ml.min < mh.min)
            minmax.min = ml.min;
        else
        minmax.min = mh.min;     
     
         // Compare maximums of two parts
        if (ml.max > mh.max)
        minmax.max = ml.max;
         else
        minmax.max = mh.max;     
     
         return minmax;

        
        
    }

int main()
{
    // //Method 1.
    // int n;//size of the array
    // cout<<"Enter the number of elements in the array:\n";
    // cin>>n;
    // int arr[n];
    // cout<<"Enter the elemnts\n";
    // for(int i=0;i<n;i++)
    // cin>>arr[i];
    // sort(arr,arr+n);//Nlog n time 
    
    // cout<<"Max element is "<<arr[n-1]<<endl;
    // cout<<"Min element is "<<arr[0]<<endl;

    // Method 2
     int n;//size of the array
    cout<<"Enter the number of elements in the array:\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elemnts\n";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    Pair minmax = getminmax(arr, 0, 
                             n - 1);
                              
    cout << "Minimum element is "
         << minmax.min << endl;
    cout << "Maximum element is "
         << minmax.max;


    return 0;
}