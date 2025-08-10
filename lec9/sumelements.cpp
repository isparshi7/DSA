#include<iostream>
using namespace std;
int sumelements(int arr[],int n)
{
   int sum=0;
   for(int i =0;i<n;i++)
   {
    sum=sum+arr[i];
   }
   return sum;
}
int main()
{
    int arr[100],n;
    cout<<"enter the number of elements you want to enter in array:";
    cin>>n;
    for(int i =0; i<n;i++)
    {
       cin>>arr[i];
    }
    cout<<"the sum of elements of array is:"<<sumelements(arr,n);
    return 0;
}