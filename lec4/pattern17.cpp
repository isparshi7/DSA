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
       char c='A'+i+j-2;
      while(j<=n)
      {
       
        cout<<c;
        c=c+1;
        j=j+1;
      }
      cout<<endl;
      i=i+1;
    }
}