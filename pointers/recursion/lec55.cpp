/*
//sum of all elements of an array using recursion
#include<iostream>
using namespace std;
int Sum(int arr[],int index,int n)
{
    if(index==n)
    {
        return 0 ; 

    }
    return arr[index]+Sum(arr,index+1,n);
    
}
int main()
{
    int arr[]= {3,4,5,8,7};
    cout<<Sum(arr ,0,5);
    return 0;

}
    */

 /*
    //minimum element of array without recursion
    #include<iostream>
    using namespace std;
    int main()
    {
         int arr[]= {9,4,5,8,7};
         int i=0;
         int min=arr[0];
         for(i=0;i<5;i++)
         {
            if(arr[i]<min)
            {
                min=arr[i];
            }
         }
         cout<<min;

    }
         */

         /*

         //minimum element of array with recursion

         #include<iostream>
         using namespace std;
         int minelement(int arr[],int index,int n)
         {
            if(index==n-1)
            {
                return arr[index];
            }
            return min(arr[index],minelement(arr,index+1,n));

         }
         int main()
         {
            int arr[]={3,2,6,4,8};
            cout<<minelement(arr,0,5);
            return 0;

         }


         */

         //maximum element of array using recursion
         #include<iostream>
         using namespace std;
         int maxelement(int arr[],int index,int n)
         {
            if(index==n-1)
            {
                return arr[index];

            }
            return max(arr[index],maxelement(arr,index+1,n));
         }
         int main()
         {
            int arr[]={3,2,6,4,8};
            cout<<maxelement(arr,0,5);
            return 0;

         }

