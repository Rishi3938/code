#include <iostream>
#include<queue>

using namespace std;

int main() {

priority_queue<int> maxi;

maxi.push(122);
maxi.push(499);
maxi.push(0);
maxi.push(123);

//      is lia comment kr raha hu ku ki do baar print ho ja raha hai //cout<<maxi.top()<<"  "<<endl; // max element print krna ka lia;

int n = maxi.size(); //for storing size;

for(int i = 0; i<n; i++)
{
    cout<<maxi.top()<<endl; // print max element;
    
    maxi.pop(); // element  ko delet krna ka lia loop mai taki next new value print hoga;
}
// -----------------------------------min element --------------------------------------------------------
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;

priority_queue<int , vector <int> , greater<int> > mini;

mini.push(888);
mini.push(777);
mini.push(555);
mini.push(444);
mini.push(111);

 //  cout<<mini.top()<<endl; // for priniting min;

int x = mini.size();

for(int i =0 ; i<x; i++)
{
    cout<<mini.top()<<endl;
    
    mini.pop();
}


	return 0;
}
