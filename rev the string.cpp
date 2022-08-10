#include<iostream>
using namespace std;

void getReverse(char name [],int n)
{
    
    int start =0;
    int end = n-1;
    
    while(start<=end)
    {
   
        swap(name[start],name[end]);
        start++;
        end--;
}
    
}

int getLenth(char name[])
{
     int count =0;
     
     for(int i =0; name[i]!='\0';i++)
     {
         count++;
     }
     return count;
}


int main() {

   char name[20];
   cin>>name;
   int x = getLenth(name);
   
  getReverse(name,x);
  cout<<name;
   
	return 0;
}