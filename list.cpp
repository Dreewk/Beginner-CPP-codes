#include<iostream>
#includ
using namespace std;
int main()
{
 list<int> l,m;
 int i;

 for(i=1;i<=5;i++)
 {
   l.push_front(i);
   }
   for(i=1;i<=5;i++)
   m.push_back(i);
   for(i=1;i<=5;i++)
    print(l);
   return 0;}
