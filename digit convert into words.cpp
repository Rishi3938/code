#include<iostream>
using namespace std;

void Saydigit(int n, string arr[])
{
    if(n==0)
    return ;
    
    int digit=n%10;
    n=n/10;
    Saydigit(n,arr);
    cout<<arr[digit]<<endl;
}


int main()
{
    
    string arr[10] = {"zero","one","two","three","Four","Five","Six","Seven","Eight","Nine"};
    
    int n;
    cin>>n;
    
    Saydigit(n,arr);
    
    
    
    
}