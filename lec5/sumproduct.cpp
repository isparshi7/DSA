#include<iostream>
using namespace std;
int main()
{
    int n,dig,sum=0,prod=1;
    cout<<"enter the number:";
    cin>>n;
    while(n>0)
    {
        dig=n%10;
        sum=sum+dig;
        n=n/10;
        prod=prod*dig;
    }
    cout<<"sum is :"<<sum<<endl;
    cout<<"product is:"<<prod<<endl;
    cout<<"diffrence is:"<<prod-sum;
}