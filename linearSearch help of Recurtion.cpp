#include<iostream>
using namespace std;

 int linearSearch(int arr[],int size,int key)
 {
     if(size==0)
     return false;
     
     if(arr[0]==key)
     {
         return true;
     }
     else
     {
         int remaningPart = linearSearch(arr+1,size-1,key);
         return remaningPart;
     }
 }

int main()
{
    int arr[5]= {1,3,13,11212,998};
    int size = 5;
    int key =1;
    
    int ans = linearSearch(arr,size,key);
    if(ans)
    {
        cout<<"Mil gaya mera bhai"<<endl;
    }
    else
    {
        cout<<"Nhi Mila Bhai "<<endl;
    }
    
    
}