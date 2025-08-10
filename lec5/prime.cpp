#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int isprime=0;
    cout<<"enter the number:";
    cin>>n;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
              cout<<"this number is not prime"<<" ";
              isprime=1;
              break;
        }

    }
    if(isprime==0)
    {
        cout<<"this number is prime";

    }
    
    
}