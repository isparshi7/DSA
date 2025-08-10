#include<iostream>
using namespace std;
bool iseven()
{
    int n;
    cin>>n;
    if(n%2==0)
    {
        return 1;
    }
    
    else{
        return 0;
    }   
}
int main()
{
    if(iseven())
    {
       cout<<"number is even";

    }
    else{
        cout<<"number is odd";
    }

}


   



