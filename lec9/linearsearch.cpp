#include<iostream>
using namespace std;
int linsearch(int arr[],int n )
{
    int a;
    cout<<"enter the element you want to search:";
    cin>>a;
    for(int i =0;i<n;i++)
    {
        if(a==arr[i])
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n,arr[100];
    cout<<"enter the number of elements want to enter in an array:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   
    int b =linsearch(arr,n);
    if(b==1)
    {
        cout<<"element is found";
    }
    else{
        cout<<"element is not found";
    }
    return 0;
}
