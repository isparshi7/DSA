#include<iostream>
using namespace std;
        int pivotIndex(int nums[],int n) 
        {
            int s=0;
            int n =nums.size();
            int e=n-1;
            int mid = s+(e-s)/2;
            while(s<e)
            {
                if(nums[mid]>=nums[0])
                {
                    s=mid+1;
                }
                else
                {
                    e=mid;
                }
                mid=s+(e-s)/2;
            }
            return s;
            
        }
        int main()    
        {
            int n;
            cout<<" enter elements:";
            cin>>n;
            int arr[n];
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }
            cout<<"pivot is :"<<pivotIndex(arr,n);
            return 0;
        }
    