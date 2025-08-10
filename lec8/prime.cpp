#include<iostream>
using namespace std;
int isprime(int n)
{
    int count=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0){
            return 0;//not a prime number
        }
        return 1;

   }
}
int main()
{
    int n;
    cin>>n;
    if(isprime(n))
    {
        cout<<"num is prime";
    }
    else{
        cout<<"num is not prime";
    }
}