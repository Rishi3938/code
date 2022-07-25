#include<iostream>
using namespace std;
int main()
{
  int a;
  cout<<"enter a number"<<endl;
  cin>>a;
  int b;
  cout<<"enter a no"<<endl;
  cin>>b;
  char op;
  cout<<"Entr a no"<<endl;
  cin>>op;
  
    switch(op)
    {
        case '+': cout<<a+b;
                  break;
        case '-': cout<<a-b;
                  break;
        case '*': cout<<a*b;
                  break;
        case '/': cout<<a/b;
                  break;
                  
                  default:cout<<"i dont know";
    }
    
    
    
}