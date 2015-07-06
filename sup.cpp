#include<iostream>
#include<vector>
using namespace std;
int main()
{
     int i;
  vector <string> a;
  a.push_back("Hi");
   a.push_back("Bye");
    a.push_back("Hello");
     a.push_back("Super");
      a.push_back("Rahul");
  for(i=0;i<a.size();i++)
  cout<<"\n"<<a[i];
  return 0;
  }

