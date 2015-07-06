#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
   int a,b,ans;
   cout<<"Enter 2 integers";
   cin>>a>>b;
   ans=abs(pow(a,4)-pow(b,4));
   cout<<ans;
   return 0;
}
