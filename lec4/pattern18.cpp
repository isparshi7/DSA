#include<iostream>
using namespace std;
int main()
{
    int n,count=1;
    cout<<"enter the value of n:";
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int k=n-i;
        while(k)
        {
            cout<<" ";
            k=k-1;
        }

      int j=1;
       
      while(j<=i)
      {
        char star=n;
        cout<<star;
        star=star-1;
     
        j=j+1;
      }
      cout<<endl;
      i=i+1;
    }
}