#include<iostream>
using namespace std;
 
   void reverseString(string &str,int i,int j)
  {
      if(i>j)
      return;
      
      swap(str[i],str[j]);
      i++;
      j--;
      reverseString(str,i,j);
  }
  

int main()
{
    string name;
    cin>>name;
    
    reverseString(name,0,name.length()-1);
    cout<<name;
}