#include<iostream>
#include <climits>
using namespace std;
int minelement( int arr[],int  size)
{
    int min = INT_MAX;
    for(int i=0; i<size; i++)
    {
        if (min > arr[i])
        {
           min =arr[i];
        }
    }
    return min;
}
int maxelement( int arr[],int size)
{
    int max = INT_MIN;
    for(int i=0; i<size; i++)
    {
        if (max < arr[i])
        {
           max =arr[i];
        }
    }
    return max;
}
int main()
{
    int size;
    cout<< "enter the size ";
    cin>>size;
    int arr[1000];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"minimum element is :"<<minelement(arr,size)<<endl;
    cout<<"maximum element is :"<<maxelement(arr,size)<<endl;
}