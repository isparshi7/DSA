#include<iostream>
using namespace std;
int setbits(int a,int b)
{
    int count=0,n,c;
    c=a&b;
    while(n>0)
    {
      if(c&1)
      {
        count =count+1;
      }
    }

}
int main()
{
    int a,b,n;
    cin>>a>>b;
    setbits(n);

}