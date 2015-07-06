#include<iostream>
using namespace std;
class stack1
{
  public:
  int st[5];
  int stacktop;
  stack1()
  {
      stacktop=0;
  }

  void push(int t)
  {
    if(stacktop==5)
    cout<<"Stack is full";
    else
    st[stacktop++]=t;
    }
    void pop()
    {
      if(stacktop>0)
      {
        stacktop--;
        cout<<"popped element is"<<st[stacktop];
        }
        else
        cout<<"\n"<<"Stack is empty";
    }
    void display()
    {
    int i;
      for(i=stacktop-1;i>=0;i--)
      cout<<"\n"<<st[i];
      }
      };
      int main()
      {
         stack1 s;
         int ch,a;
         do
         {
            cin>>ch;
            switch(ch)
            {
            case 1:
              cin>>a;
              s.push(a);
              break;
              case 2:
               s.pop();
               break;
               case 3:
                 s.display();
                 }
                 }while(ch!=4);
                 return 0;
            }
