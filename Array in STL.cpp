#include <iostream>
#include<array>
using namespace std;

int main() {
	
	array<int,5> a = {2,3,4,6,8};
	
	cout<<a.at(2)<<endl; // any element
	
	cout<<a.empty()<<endl; // empty or not return bool value
	
	cout<<a.front()<<endl; // first value

    cout<<a.back()<<endl; // for the last value
    
 
    
    
	return 0;
}

