#include <iostream>
using namespace std;

void swapAlternativ(int arr[],int n)
{
    for(int i=0;i<n;i=i+2)
    {
        if(arr[i+1]<n)
        {
            swap(arr[i],arr[i+1]);
        }
        
    }
}



void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main() {

   int even[8] = {1,2,3,4,5,6,7,8};
   int odd[5] = {9,8,7,6,5};
   
   swapAlternativ(even,8);
   printArray(even,8);

	return 0;
}
