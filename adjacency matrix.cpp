#include<iostream>
using namespace std;
# define max 10
int adja[max][max];
class adj
{
  public:
  int origin,dest;

  void create(int x)
  {


      int m,i;
      m=x*(x-1);
    for(i=1;i<=m;i++)
    {
       cout<<"\n"<<"Enter the edge(0,0 to quit)";
       cin>>origin>>dest;
       if(origin==0 && dest==0)
       break;
       if(origin>x ||dest>x || origin<=0 || dest<=0)
       {
         cout<<"\n"<<"Invalid edge";
         i--;
        }
if(origin==dest)
    adja[origin][dest]=0;
        else
        adja[origin][dest]=1;
    }
}
void display(int x)
{
  int i,j;
  for(i=1;i<=x;i++)
  {
    for(j=1;j<=x;j++)
    {
      cout<<"\n"<<adja[i][j];
    }
}
}
};
int main()
{
  adj obj;
  int n,i,j;
  cout<<"Enter the number of nodes";
  cin>>n;
for(i=1;i<=n;i++)
{

    for(j=1;j<=n;j++)
    {

        adja[i][j]=0;
    }
}
  obj.create(n);
  obj.display(n);
  return 0;
}
