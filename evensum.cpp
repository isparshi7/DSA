#include<iostream>
using namespace std;
int main(){
    int sum=0,n,i=1;
    cout<<"enter the number of terms you want:";
    cin>>n;
    while(i<=n){
    if(i%2==0){  
       sum=sum+i;
     
    }
      i=i+1;
    }
    
    cout<<"the sum is :"<<sum;
}