#include <iostream>
#define MAX 1000

using namespace std;

void dijkstra(int n,int v,int cost[10][10],int dist[10],int parent[10]);

int main()
{
 int n,v,i,j,cost[10][10],dist[10];
 int parent[10]={0};
 cout<<"\n Enter the number of Nodes: ";
 cin>>n;
 cout<<"\n Enter the Weight Matrix:\n";
 cout<<"\nEnter 1000 to denote Infinity\n";
 for(i=0;i<n;i++)
 {
   for(j=0;j<n;j++)
   {
     cin>>cost[i][j];
   }
 }
 cout<<"\n Enter the Source Node:";
 cin>>v;
 dijkstra(n,v-1,cost,dist,parent);
 cout<<"\n   Shortest Path from Node"<<v;
 cout<<"\n#################################\n\n";
 for(i=0;i<n;i++)
 {
    cout<<"Distance to Node: "<<i+1<<" is "<<dist[i]<<"\n";
 }
 cout<<"Parent array:";
 for(i=0;i<n;i++)
 {
    cout<<"Parent of node "<<i+1<<" is "<<parent[i]+1<<"\n";
 }

 return 0;
}


void dijkstra(int n,int v,int cost[10][10],int dist[10],int parent[10])
{
  int i,u,count,w,flag[10],min;

  for(i=0;i<n;i++)
  {
    flag[i]=0;
    dist[i]=cost[v][i];
    parent[i]=v;
  }
  count=1;
  while(count<n)
  {
    min=MAX;
    for(w=0;w<n;w++)
    {
       if(dist[w]<min && !flag[w])
       {
           min=dist[w];
           u=w;
       }
    }
    flag[u]=1;
    count++;
    for(w=0;w<n;w++)
    {
       if((dist[u]+cost[u][w]<dist[w])&&!flag[w])
       {
          dist[w]=dist[u]+cost[u][w];
          parent[w]=u;
       }
    }
 }
}
