#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the value of ch:"<<endl;
    cin>>ch;
    if(ch>='a'&& ch<='z')
    {
        cout<<"lowercase"<<endl;
    }
    if(ch>='A' && ch<='Z'){
        cout<<"upercase"<<endl;
    }
    if(ch>='0' && ch<='9'){
        cout<<"this is numeric"<<endl;
    }}