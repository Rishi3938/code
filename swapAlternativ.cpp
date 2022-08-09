#include <iostream>
using namespace std;

void swapAlternativ (int arr[],int n)
{
    for(int i =0;i<n;i=i+2)
    {
        if(i+1< n){
        swap(arr[i],arr[i+1]);
        }
    }
}

 void printArray(int arr[], int n)
{
    for(int i =0;i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}



int main() {

int arr[5] = { 1,2,4,5,6};

  swapAlternativ(arr,5);
  printArray(arr,5);
  
	return 0;
}
