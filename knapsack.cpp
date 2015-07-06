#include<iostream>
using namespace std;
int cost[100],qty[100],maxi,n;
void knapsack()
{
int i,j,temp,tot=0,samp=0,m;
for(i=0;i<n-1;i++)
{
m=i;
for(j=i+1;j<n;j++)
{
  if(cost[j]<cost[m])
  m=j;
}
temp=cost[i];
cost[i]=cost[m];
cost[m]=temp;
temp=qty[i];
qty[i]=qty[m];
qty[m]=temp;
}
for(i=n-1;i>=0;i--)
{
  if(samp+qty[i]<=maxi)
  tot+=(cost[i]*qty[i]);
  samp=samp+qty[i];
  if(samp==maxi)
  break;
  }
  cout<<"\n"<<"Maximum cost:"<<tot;

  }
int main()
{
  int i;
  cout<<"\n"<<"Enter the number of items";
  cin>>n;
  cout<<"\n"<<"Enter cost for each item";
  for(i=0;i<n;i++)
  cin>>cost[i];
  cout<<"\n"<<"Enter quantity for each item";
  for(i=0;i<n;i++)
  cin>>qty[i];
  cout<<"\n"<<"Enter maximum capacity";
  cin>>maxi;
  knapsack();
  return 0;
  }
