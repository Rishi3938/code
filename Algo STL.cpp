#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    
    cout<<binary_search(v.begin(), v.end(), 6)<<endl; // 1 aa gaya to present hai 0 to nhi bool;
    
    
    cout<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;  // output is 2 because is index i =s 2 star from 1
    
     cout<<upper_bound(v.begin(),v.end(), 6)-v.begin()<<endl;
     
     
     int a = 5;
     int b = 10;
     
     cout<<"max element is "<<max(a,b)<<endl;
     
     cout<<" min element is "<<min(a,b)<<endl;
     
     swap(a,b);
     
     cout<<a<<endl;
      cout<<b<<endl;
      
      string s = "Rishi";
      reverse(s.begin(),s.end());
      cout<<s;
     
     
    
    return 0;
    
}