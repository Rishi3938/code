#include<iostream>
using namespace std;


int main ()
{
    int arr[5] = {0,1,0,1,0};
    
    int i = 0;
    
    for(int j =0; j<5;j++)
    {
        if(arr[j] !=0 )
        {
            swap(arr[j],arr[i]);
            i++;
        }
    }
    
    for(int i=0;i<5;i++)
    {
        cout<<arr[i];
    }
    return 0;
}