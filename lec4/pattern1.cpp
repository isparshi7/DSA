#include<iostream>
using namespace std;
int main(){
    int n ,i=1;
    cout<<"enter the value of n ";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}