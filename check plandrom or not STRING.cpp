#include<iostream>
using namespace std;



 bool checkPlandrom(char str[], int n)
{
    int s=0;
    int e=n-1;
    
    while(s<=e)
    {
        if(str[s]!=str[e])
        {
            return 0;
        }
        else;
        s++;
        e--;
    }
    return 1;
}

int getLenth(char name[])
{
     int count =0;
     
     for(int i =0; name[i]!='\0';i++)
     {
         count++;
     }
     return count;
}


int main() {

   char name[20];
   cin>>name;
   int x = getLenth(name);
  cout<<endl;
   cout<<checkPlandrom(name,x);
   
   
	return 0;
}