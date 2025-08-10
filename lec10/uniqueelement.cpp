#include<iostream>
using namespace std;
 int unique(int arr[],int n )
 {
    int i,ans=0;
    for(i=0;i<n;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
 }
int main()
{
    int arr[100],n,i;
    cout<<"enter the number of elements in an array:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int b =unique(arr,n);
    cout<<"the unique elements is:"<< b;
    return 0;
}