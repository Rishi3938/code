#include<iostream>
using namespace std;

bool isSorted(int arr[],int size)
{
    if(size==0||size==1)
    return true;
    
    if(arr[0]>arr[1])
    return false;
    else
    {
        bool remaningPart= isSorted(arr+1,size-1);
        return remaningPart;
    }
}


int main()
{
    int arr[5]={1,2,3,4,9};
    int size=5;
    
    bool ans=isSorted(arr,size);
    if(ans)
    {
        cout<<"Thik hai bhai";
    }
    else
    {
        cout<<"Thik nhi hai bhai";
    }
}