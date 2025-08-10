#include<iostream>
using namespace std;
int duplicatenum(int arr[],int n )
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count=count+1;
        }

    }
    if(count=)
    return count;
}
int main()
{
    int arr[],n;
    cout<<"enter the number of elements in an array:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int b= duplicatenum(arr,n); 
    if(b==2)
    {
        cout<<
    }
}