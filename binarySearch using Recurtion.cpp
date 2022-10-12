#include<iostream>
using namespace std;

 bool binarySearch(int arr[],int start,int end,int key)
 {
     if(start>end)
     return false;
     int mid = start+(end-start)/2;
     
     if(arr[mid]==key)
     return true;
     
     if(arr[mid]<key)
     {
         return binarySearch(arr,mid+1,end,key);
     }
     else
     {
         return binarySearch(arr,start,mid-1,key);
     }
     
 }

int main()
{
    int arr[5]= {1,3,13,11212,998};
    int size = 5;
    int key =998;
    
    int ans = binarySearch(arr,0,5,key);
    if(ans)
    {
        cout<<"Mil gaya mera bhai"<<endl;
    }
    else
    {
        cout<<"Nhi Mila Bhai "<<endl;
    }
    
    
}