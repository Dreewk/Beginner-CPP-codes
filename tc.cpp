#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
  vector <int> heights;
   int i=0,j,tot,mintot=2500,n,t,M,flag=0;
  cout<<"Size";
  cin>>n;
  cout<<"\n M?";
  cin>>M;
  for(int k=0;k<n;k++)
  {
     cin>>t;
     heights.push_back(t);
     }

		sort(heights.begin(),heights.end());
	if(M==1)
	flag=1;
	while(i<heights.size()-M || flag==0)
	{  tot=0;
	   if(heights[i]==heights[i+M-1])
	   flag=1;
	   else
	   {
	     j=i;
	     while(j!=M)
	     {
	       tot+=heights[i+M-1]-heights[j];
	       j++;
	}
	if(tot<mintot)
	mintot=tot;
	}
	i++;
	}
	if(flag)
	cout<<"0";
	else
	cout<<mintot;
	return 0;
	}
