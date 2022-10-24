#include<iostream>
using namespace std;

bool isPlindrom(string str,int s,int e){
    if(s>=e)
    return true;

    return str[s]==str[e] && isPlindrom(str,s+1,e-1);
}



int main(){
    string str;
    cin>>str;
    cout<<isPlindrom(str,0,str.length()-1);
}