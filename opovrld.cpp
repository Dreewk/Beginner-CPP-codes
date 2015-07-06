#include<iostream>
using namespace std;
class sample
{
  int num,den;
  public:
  sample(int a,int b)
  {
    num=a;
    den=b;
}
friend void operator +(sample s1,sample s2);
};
void operator +(sample s1,sample s2)
{
  int ans1,ans2;
  ans1=s1.num+s2.num;
  ans2=s1.den+s2.den;
  cout<<ans1<<"\n"<<ans2;
}

int main()
{
   sample a(2,3);
   sample b(4,5);
   operator+(a,b);
   return 0;


}
