#include<iostream>
#include<algorithm>
using namespace std;
struct sample
{
	float ass1,ass2,ass3,sem,att;
};
int main()
{
 struct sample s[6];
 int n,credits[6],i,tot,a,su,flag;
 float u,v,cg;
 cin>>n;
 while(n--)
 {
 for(i=0;i<6;i++)
 {
 cin>>credits[i];
 su+=credits[i];
 }
 tot=0;
 u=0;
 v=0;
 flag=0;
 for(i=0;i<6;i++)
 {
   cin>>s[i].ass1>>s[i].ass2>>s[i].ass3>>s[i].sem>>s[i].att;
   u=s[i].ass1+s[i].ass2+s[i].ass3-min(ass1,min(ass2,ass3));
   if(s[i].att<51)
   a=5;
   else
   if(s[i].att<61)
   a=4;
   else
   if(s[i].att<71)
   a=3;
   else
   if(s[i].att<81)
   a=2;
   else
   if(s[i].att<91)
   a=1;
   else
   a=0;
   v=((u/40)*45)+a+(s[i].sem/2);
   if(v>91)

   	tot+=10*credits[i];
   	else
   	if(v>81)
   	tot+=9*credits[i];
   	else
   	if(v>71)
   	tot+=8*credits[i];
   	else
   	if(v>61)
   	tot+=7*credits[i];
   	else
   	if(v>50)
   	tot+=6*credits[i];
   	else
   	if(v==50)
   	tot+=5*credits[i];
    else
    {
    tot+=0;
    flag=1;
    }
 }
 cg=(float)tot/su;
 if(flag)
 cout<<"FAILED,"<<cg;
 else
 cout<<"PASSED,"<<cg;
 }
 return 0;
}

