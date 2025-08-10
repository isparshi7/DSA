#include<iostream>
using namespace std;
void swapalt(int arr[],int n )
{
    for(int i =0;i<n-1;i=i+2)
    {
        swap(arr[i],arr[i+1]);
    }
}
int main()
{
    int arr[100],n;
    cout<<"enter the number of elements in an array:";
    cin>>n;
    cout<<"array before swapping:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    swapalt(arr,n);
    cout<<"array after swapping:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}