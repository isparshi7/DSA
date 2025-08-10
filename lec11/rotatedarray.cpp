#include<iostream>
using namespace std;
int binarysearch(int arr[],int s,int e,int k)
{
    int start=0;
    int end=e;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==k)
        {
            return mid;
        }
        else if(arr[mid]>k)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start +(end-start)/2;
    }
    return -1;
    
}
int pivotindex(int arr[],int n ,int k)
{
    int s=0;
    int e=n-1;
    int mid= s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>arr[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int searchrotatedarr(int arr[],int n,int k)
{
    int p=pivotindex(arr,n,k);
    if(k>arr[p]&&k<arr[n-1])
    {
       return  binarysearch(arr,p,n-1,k);
    }
    else {
       return  binarysearch(arr,0,p-1,k);
    }
  
}
int main()
{
    int n;
    cout<<"enter number of elements:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k ;
    cout<<"enter the element you want to get searched:";
    cin>>k;
    
    cout<<"searched target in rotated sorted array:"<<searchrotatedarr(arr,n,k);
    return 0;
}