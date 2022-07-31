#include <iostream>
using namespace std;

int Search(int arr[],int size,int key)
{
    
    for(int i=0;i<size;i++)
    {
        if(arr[i] == key)
        {
        return 1;
        }
    }
    
 return 0;
}


int main() {
    
 int arr[10]  = { 1,3, 4,5,64,7,3,-4,-2,2};

 
 int key;
 cin>>key;
 
 bool found = Search(arr,10,key);
 
 if(found)
 {
     cout<<"key is present";
 }
 else
 {
     cout<<"key absent";
 }
 
	return 0;
}