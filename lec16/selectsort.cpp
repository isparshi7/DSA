// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
   int n;
   cout<<"enter the number of terms want to enter:";
   cin>>n;
   int arr[n];
   cout<<"unsorted array:";
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
  
   for(int i=0;i<n-1;i++)
   {
    int minindex=i;
       for(int j=i+1;j<n;j++)
      {
          if(arr[i]>arr[j])
          {
             minindex =j;
          }
      }
      swap(arr[i],arr[minindex]);
   }
    cout<<"sorted array:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}