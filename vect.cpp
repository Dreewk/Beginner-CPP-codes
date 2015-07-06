#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  int i;
  vector <int> a;
  for(i=1;i<=5;i++)
  a.push_back(i);
  sort(a.rbegin(),a.rend());
  for(i=1;i<=5;i++)
    cout<<a[i];
  return 0;
}
