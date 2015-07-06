#include<iostream>
using namespace std;
struct graphnode
{
  int name;
  struct graphnode *next;
};
void addNode(struct graphnode *G[],int startnode,int endnode )
{
    struct graphnode *tmp;
    tmp->name=endnode;
    tmp->next=G[startnode];
    startnode=tmp->name;
}
void printgraph(struct graphnode *G[],int num)
{
  int i;
  for(i=0;i<num;i++)
  {
      struct graphnode *tmp;
      tmp=G[i];
      cout<<i;
      while(tmp!=NULL)
      {
          cout<<tmp->name;
          tmp=tmp->next;
      }
  }

}
int main()
{
    int n;
    cout<<"Number of nodes";
    cin>>n;
    struct graphnode *arrayofvertices[n];
    int i;
    for(i=0;i<=n;i++)
    {
        arrayofvertices[i]->name=i;
        arrayofvertices[i]->next=NULL;
    }
      addNode(arrayofvertices,0,1);
      addNode(arrayofvertices,0,2);
      printgraph(arrayofvertices,n);
      return 0;
}
