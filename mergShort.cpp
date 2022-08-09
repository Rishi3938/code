#include<iostream>
using namespace std;

void mergSort(int arr1[],int n,int arr2[],int m,int arr3[])
{
    int i = 0;
    int j = 0;
    int k = 0;
    
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j]){
           arr3[k] = arr1[i];
           k++;
           i++;
        }
        else if(arr1[i]>arr2[j]){
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }
    
    // maan lo arr1 mai kuch bach gaya to usko copy kr do arr3
    
    while(i<n)
    {
        if(arr3[k] = arr1[i]);
        k++;
        i++;
    }
    
     // maan lo arr2 mai kuch bach gaya to usko copy kr do arr3
     
     while(j<m)
     {
         arr3[k] = arr2[j];
         k++;
         j++;
     }
    
}

void printArray(int arr[],int n)
{
    for(int i = 0;i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    
    int arr1[5] = {2,3,4,5,10};
    int arr2[3] = {1,7,9};
    int arr3[8] = {0};
    
    mergSort(arr1,5,arr2,3,arr3);
    printArray(arr3,8);
    
    
}