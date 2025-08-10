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
      int j=1;
      while(j<=i)
      {
        int a=i-j+1;
        cout<<a;
        j=j+1;
      }
      cout<<endl;
      i=i+1;
    }
}