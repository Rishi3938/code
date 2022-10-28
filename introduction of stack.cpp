#include<iostream>
#include<stack> 
using namespace std;
int main(){
    
    stack<int> s;
    
    //insert into stack
    s.push(2);
    s.push(3);
    s.push(9);
    
    // print top reuslt = 9
    cout<<s.top()<<endl;
    
    //delete elemnt from stack
    
    s.pop();
      cout<<s.top()<<endl;
    s.pop();
    s.pop();
      // to check stack is empty or not
      if(s.empty()){
          cout<<"stack is empty";
      }
      else{
          cout<<" stack is not empty";
      }
}