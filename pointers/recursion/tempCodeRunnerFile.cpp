/*
//linear search
#include<iostream>
using namespace std;
int linearSearch(int arr[],int index,int x,int n)
{
    if(arr[index]==n)//base case
    {
        return 0;
    }
    if(arr[index]==x)
    {
        return index;
    }
    linearSearch(arr,index+1,x,n);
}
int main()
{
    int arr[]={1,4,2,7,5};
    int X=7;
    cout<<linearSearch(arr,0,X,5);
    return 0;
}
*/


//binary search
#include<iostream>
using namespace std;
int binarySearch(int arr[],int end,int start,int x)
{
    int mid=start+(end-start)/2;
    if(start>end)
    {
        return 0;
    }
    if(x==arr[mid])
    {
        return mid;
    }
    if(x>arr[mid])
    {
        return binarySearch(arr,end,mid+1,x);  
      }
      else
      {
        return binarySearch(arr,mid-1,start,x);
      }
}
int main()
{
    int arr[]={1,5,6,7,8};
    cout<<binarySearch(arr,5,0,7);
    return 0;
}