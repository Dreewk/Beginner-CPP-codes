#include<iostream>
#include<stdio.h>
using namespace std;
string add(string e,string f)
{
  string res;
  int i,first,second,s,c=0;
  for(i=strlen(f)-1;i>=0;i--)
  {
     first=e.at(i)-'0';
     second=f.at(i)-'0';
     s=(first^second^carry)+'0';
     c=(first&second | second&c | first&c);
     res=(char)sum+res;
     }
     if(carry==1)
     res='1'+res;
     return res;
     }


 int mult(string a,string b,int l)
{
  int x,y;
  if(n==0)
  return 0;
  if(n==1)
  return (a[0]-'0')*(b[0]-'0');
  x=n/2;
  y=n-x;
  d=a.substr(0,x);
  e=a.substr(x,y);
  f=b.substr(0,x);
  g=b.substr(x,y);

  t1=mult(d,f);
  t2=mult(e,g);
  t3=mult(add(d,e),add(f,g));

  t4=t1*pow(2,(2*y))+(t3-t1-t2)*pow(2,y)+t2;

  return t4;
  }




int main()
{

  int m,n,ans,fr[100],k=0,l;
  string str1,str2;
   cout<<"Enter two strings";
   cin>>str1>>str2;

  m=strlen(str1);
  n=strlen(str2);
  if(m>n)
  {
    l=strlen(str1);
     for(i=0;i<m-n;i++)
     {
       str2='0'+str2;
       }
       }
       else if(m<n)
       {
            l=strlen(str2);
         for(i=0;i<n-m;i++)
         {
            str1='0'+str1;
            }
            }
            ans=mult(str1,str2);
            while(ans)
            {
              fr[k++]=ans%2;
              ans/=2;
              }
              printf("After multiplication:");
              for(i=k-1;i>=0;i--)
              cout<<fr[i];
            return 0;
            }
