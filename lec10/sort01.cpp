// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int arr[100],n;
    cout<<"enter the number of elements you want to enter:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int val=0;val<n;val++)
    {
        cout<<arr[val]<<" ";
    }
   return 0;
}