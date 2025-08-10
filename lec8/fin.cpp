#include<iostream>
using namespace std;
int fib(int n)
{
    int a=0,b=1,sum;
   
    for(int i=2;i<n;i++)
    {
       sum=a+b;
      
       a=b;
       b=sum;


    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<"fibnoacci series:"<<fib(n);

}
