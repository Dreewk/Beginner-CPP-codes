#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   char name[5][10]={"rahul","ganesh","suresh","ramesh","ashwat"};
   int score[5]={1,22,3,44,55};
   int sc[5]={34,32,12,9,87},i;
   cout<<"Name"<<"Score"<<"\t\t"<<"Score2"<<"\n";
   for(i=0;i<5;i++)
   cout<<name[i]<<setw(5)<<score[i]<<setw(9)<<sc[i]<<"\n";
   return 0;
}
