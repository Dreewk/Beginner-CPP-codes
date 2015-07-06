#include<iostream>
using namespace std;
class temp
{
  ~temp()

{cout<<"destroying object";}
public:
temp()
{
 cout<<"\n"<<"Creating object";
 }
 friend void d(temp *);
 };
 void d(temp *p)
 {
  delete p;
  cout<<"\n"<<"Destroyed object";
  }

  int main()
  {
   temp *ptr=new temp;
   d(ptr);
   return 0;
   }
