#include <iostream>
using namespace std;

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

   char name[40 ];
   cin>>name;
   
   cout<<" your name is "<<name;
   
   cout<<endl;
   
   cout<<"length is "<<getLenth(name);
	return 0;
}
