#include<iostream>
using namespace std;
bool iseven(int num)
{
    //1->even
    //0->odd
    if(num&1)
    {
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int num;
    cin>>num;
    //because upr wla boolean return krega isilye ye if else likha h yha
    if(iseven(num))
    {
        cout<<"number is even";
    }
    else{
        cout<<"number is odd";
    }
}