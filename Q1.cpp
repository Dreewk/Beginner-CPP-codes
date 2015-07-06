#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n;
  cout<<"Enter a positive number:";
  cin>>n;
  if(n<=0)
  cout<<"nan";
  else
  cout<<n*log(n);
  return 0;
}
