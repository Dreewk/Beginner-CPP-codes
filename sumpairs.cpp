#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  vector <int> a;
  int b,count=0,sum,ans=0,i,l=0,m;
  for(i=0;i<4;i++)
  {
    cin>>b;
    count++;
    a.push_back(b);
 }
 cin>>sum;
 sort(a.begin(),a.end());
 m=count-1;
 while(l<m)
 {
    if(a[l]+a[m]==sum)
    ans++;
    if(a[l]+a[m]<sum)
    l++;
    if(a[l]+a[m]>sum)
    m--;
    }
    cout<<"\n"<<"Number of pairs"<<ans;
    return 0;
}

