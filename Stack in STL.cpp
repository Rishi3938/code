#include <iostream>
#include<stack>
using namespace std;

int main() {

stack<string> s;

s.push("rishi");
s.push("Raj");
s.push("sinha");

cout<<s.top()<<endl;


s.pop();

cout<<s.top()<<endl;// after delete they print "Raj"

 cout<<s.size()<<endl; // for the size
 
 cout<<s.empty()<<endl; // empty or not

	return 0;
}
