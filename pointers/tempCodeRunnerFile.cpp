//printing happy birthday 5 times
#include<iostream>
using namespace std;
void func(int n)
{
    if(n==0)
    {
        cout<<"happy birthday"<<endl;
        return;
    }
    cout<< n <<"happy birthday"<<endl;
    func(n-1);
}
int main()
{
    func(5);
    return 0;

}