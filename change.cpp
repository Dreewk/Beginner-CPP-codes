#include <iostream>
using namespace std;
void change(int a[10])
{
int i;
  for(i=0;i<5;i++)
  a[i]+=5;
}
int main()
{
int i;
 int a[10]={0};
 int n=5;
 cout<<"Before";
 for(i=0;i<n;i++)
 cout<<a[i];
 change(a);
 cout<<"After";
 for(i=0;i<n;i++)
 cout<<a[i];
 return 0;

}
