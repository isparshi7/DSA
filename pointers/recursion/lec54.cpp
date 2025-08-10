//fibonacci number using recursion
#include<iostream>
using namespace std;
int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main()
{
    int num;
    cin>>num;
    cout<<fib(num);
    return 0;
}

//Gcd of 2 number
int GCD(int a,int b)
{
    if(b==0)
    {
        return a;

    }
    return GCD(b,a%b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<GCD(a,b);
    return 0;
}
    
