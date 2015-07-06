#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  string str1,str2;
  int flag=0,i;
  cin>>str1>>str2;
  sort(str1.begin(),str1.end());
  sort(str2.begin(),str2.end());
  if(str1.size()!=str2.size())
  cout<<"\n"<<"Not anagrams";
  for(i=0;i<str1.size();i++)
  {
    if(str1[i]!=str2[i])
    {
    flag=1;
    break;
    }
  }
if(flag)cout<<"\n"<<"Not anagrams";
else
cout<<"\n"<<"Anagrams";
return 0;
}
