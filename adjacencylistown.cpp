#include<iostream>
#include<malloc.h>
using namespace std;
int n;
class graphnode
{
  public:
  int data;
  graphnode *next;
  graphnode *g[100];
  void creategraph()
  {
     int i,j;
     char ch;
     graphnode *start;
     cout<<"Enter the number of nodes";
    cin>>n;


 void display()
 {
    graphnode *start;
    int i;
    for(i=1;i<=n;i++)
    {
     start=g[i];
     cout<<"\n"<<i<<"->";
      while(1)
      {
        if(g[i]->next==NULL)
        {
          while(g[i]!=start)
          g[i]=g[i]->next;


        break;
        }
        cout<<g[i]->data<<"->";
        }
        }
        }
  };
  int main()
  {

    graphnode obj;
    obj.creategraph();
    obj.display();
    return 0;
}


