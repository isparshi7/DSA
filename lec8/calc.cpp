#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<"enter the value of a :"<<endl;
     cin>>a;
    cout<<"enter the value of b :"<<endl;
   cin>>b;
    
    
    cout<<"enter the operation:";
    cin>>op;
    switch (op)
    {
      case '+':
           cout<<"the sum of a and b:"<<(a+b);
           break;
      case '-':
           cout<<"the diffrence of a and b:"<<(a-b);
           break;
      case '*':
           cout<<"the multiplication of a and b:"<<(a*b);
            break;
      case '/':
           cout<<"the division of a and b:"<<(a/b);
           break;
      case '%':
           cout<<"the modulus of a and b:"<<(a%b);
           break;
    
      default:
        cout<<"wrong case entered";
        break;
    }
}