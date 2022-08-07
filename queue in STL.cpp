#include<iostream>
#include<queue>

using namespace std;
int main()
{
    
    queue<string> q;
    
    q.push(" Rishi ");
    q.push("raj");
    q.push("Sinha");
    
    cout<<q.front()<<endl;
    
    q.pop(); // for delete element in queue delete by first
    
    cout<<q.front()<<endl;
    
    cout<<q.size()<<endl;
    return 0;
    
}