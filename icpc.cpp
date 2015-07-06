#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
int t,d,n;
string s,u;
long long len,num;
map<int,int> m;
cin>>t;
while(t--)
{
cin>>n;
for(int i=0;i<n;i++)
{

cin>>len>>d;
m.insert(pair<int,int>(d,len));
}
map<int,int> m :: iterator it;

for(it=m.begin();it!=m.end();it++)
{
   u=to_string(it->first);

   for(int j=0;j<it->second;j++)
   {
     s+=u;
     }

  }
  num=stoi(s);
  cout<<num*(num+1)/2;
  }
  return 0;
}


