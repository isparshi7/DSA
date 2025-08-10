#include<iostream>
using namespace std;
int main()
{
    int sum=0,n,i=1;
    cout<<"enter the number of terms you want to input:";
    cin>>n;
    while(i<=n)
    {
      sum=sum+i;
      i=i+1;
    }
      cout<<"the value of sum is"<<" "<<sum;
}

