#include<iostream>
using namespace std;

int uniqueElement(int arr[],int n)
{
   int  ans=0;
    for(int i =0;i<n; i++)
    {
        ans= ans^arr[i];
    }
    return ans;
}

int main()
{
    int arr[5] = {121,1212,121,111,111};
    
    cout<<uniqueElement(arr,5);
    
}
