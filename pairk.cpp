#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   vector <int> a;
   int i,k,t,n,l=0,m;
   cout<<"Enter size of the vector";
   cin>>n;
   m=n-1;
   for(i=0;i<n;i++)
   {
     cin>>t;
     a.push_back(t);
     }
     sort(a.begin(),a.end());
     cout<<"Enter the value of k";
     cin>>k;
     while(l<m)
     {
       if(a[l]+a[m]==k)
       {


        cout<<a[l]<<a[m]<<"\n";
        break;
       }
        else
       if(a[l]+a[m]<k)
       l++;
       else
       m--;
       }
       return 0;
       }
