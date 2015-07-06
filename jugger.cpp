#include<iostream>
using namespace std;
int main()
{
  int i,j,q[100],ans[100],max;
  cout<<"\n"<<"Enter the input array";
  for(i=0;i<5;i++)
  cin>>q[i];
  ans[4]=-1;
  ans[3]=q[4];
  max=q[4];
  for(i=2;i>=0;i--)
  {
    if(q[i+1]>max)
    max=q[i+1];
    ans[i]=max;
    }
    cout<<"\n"<<"The answer is";
    for(i=0;i<5;i++)
    cout<<"\n"<<ans[i];
    return 0;
}
