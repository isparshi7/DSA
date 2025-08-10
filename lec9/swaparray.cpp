#include <iostream>
using namespace std;
void revarr(int arr[],int n )
{
    int start=0,end=n-1,temp;
    while(start<=end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start=start+1;
        end=end-1;
    }
    
}
void printarr(int arr[],int n )
{
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[100],n;
    cout<<"enter the number of elements want to enter in an array:";
    cin>>n;
    cout<<"array before:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    revarr(arr,n);
    cout<<"reversed array:";
    printarr(arr,n);

    return 0;
}
