#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int equal1(string &x,string &y)
{

    int len1 = x.size();
    int len2 = y.size();
    if (len1 < len2)
    {
        for (int i = 0 ; i < len2 - len1 ; i++)
            x = '0' + x;
        return len2;
    }
    else if (len1 > len2)
    {
        for (int i = 0 ; i < len1 - len2 ; i++)
            y = '0' + y;
    }
    return len1;
}

string add(string e,string f)
{
  string res;
  int i,first,second,s,c=0;
  int l=equal1(e,f);
  for(i=l-1;i>=0;i--)
  {
     first=e.at(i)-'0';
     second=f.at(i)-'0';
     s=(first^second^c)+'0';
     res=(char)s+res;

     c=(first&second | second&c | first&c);
  }

     if(c==1)
     res='1'+res;
     return res;
     }



 int mult(string a,string b)
{
  string d,e,f,g;
  int t1,t2,t3,t4,i,k;
  int x,y;
  int n=equal1(a,b);
  if(n==0)
  return 0;
  if(n==1)
  return (a[0]-'0')*(b[0]-'0');
  x=n/2;
  y=n-x;
    d = a.substr(0, x);
     e = a.substr(x,y);


    f = b.substr(0, x);
    g = b.substr(x, y);






  t1=mult(d,f);
  t2=mult(e,g);
  t3=mult(add(d,e),add(f,g));

  t4=t1*pow(2,(2*y))+(t3-t1-t2)*pow(2,y)+t2;

  return t4;
  }




int main()
{

  int m,n,ans,k=0,l,i,x,p=0,ka[100];
  string str1,str2;
   cout<<"Enter two strings";
   cin>>str1>>str2;


            ans=mult(str1,str2);
            while(ans)
            {
                ka[p++]=ans%2;
                ans/=2;

            }

              cout<<"After multiplication";
              for(i=p-1;i>=0;i--)
              cout<<ka[i];


            return 0;
            }
