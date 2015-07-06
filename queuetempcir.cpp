#include<iostream>
#include<string.h>
using namespace std;
template<class t>
class q
{
  t a[5];
  int front,rear;
  public:
  q()
  {
    front=rear=-1;
  }
  void enqueue()
  {
   t item;
   if((front==0 && rear==4)||(front==rear+1))
   {
    cout<<"\n"<<"Queue overflow";
    return;
    }
    if(front==-1)
    {
      front=rear=0;
      }
      else
      if(rear==4)
      rear=0;
      else
      rear+=1;
      cout<<"Enter element";
      cin>>item;
      a[rear]=item;
      }
      void dequeue()
      {
        if(front==-1)
        {
          cout<<"\n"<<"Queue underflow";
          return;
        }
        cout<<"\n"<<"Deleted element is"<<a[front];
        if(front==rear)
        {
          front=rear=-1;
          }
          else
          if(front==4)
          front=0;
          else
          front=front+1;
    }
    void display()
    {
     int i;
     if(front==-1)
     cout<<"\n"<<"Queue is empty";
     else
     {
        for(i=front;i<=rear;i++)
        cout<<a[i];

        }
    }


};
int main()
{
 q <int> obj1;
 q <float> obj2;
q <char> obj3;
int ch;
char type[20];
cout<<"Enter type";
cin>>type;
do
{
 cout<<"1.Enqueue 2.Dequeue 3.Display 4.Exit";
 cin>>ch;
 switch(ch)
 {
   case 1:
   if(strcmp(type,"Integer")==0)
   obj1.enqueue();
   else
   if(strcmp(type,"Float")==0)
   obj2.enqueue();
   else
   obj3.enqueue();
   break;
   case 2:
    if(strcmp(type,"Integer")==0)
   obj1.dequeue();
   else
   if(strcmp(type,"Float")==0)
   obj2.dequeue();
   else
   obj3.dequeue();
   break;
   case 3:
    if(strcmp(type,"Integer")==0)
   obj1.display();
   else
   if(strcmp(type,"Float")==0)
   obj2.display();
   else
   obj3.display();
   break;
   case 4:
    cout<<"\n"<<"Terminating...";
    break;
    default:
     cout<<"\n"<<"Wrong choice";
     }
}while(ch!=4);
return 0;
}
