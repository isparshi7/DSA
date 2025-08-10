#include<iostream>
using namespace std;
int main(){
    int i=2,n;
    cout<<"enter the number of terms you want to input:";
    cin>>n;
    while(i<n){
         if( n%i==0){
            cout<<"not prime";
            
         }
         i=i+1;
    }
    
    }