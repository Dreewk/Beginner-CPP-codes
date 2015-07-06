#include<iostream>
using namespace std;
void dijkstra(int n,int v,int cost[10][10],int dist[10])
{
  int i,min,flag[10],u,w,count;
  for(i=0;i<n;i++)
  {
      flag[i]=0;
      dist[i]=cost[v][i];
  }
  count=1;
  while(count<n)
  {
    min=1000;
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
    for(w=0;w<n;i++)
    {
       if(dist[u]+cost[u][w]<dist[w] && !flag[w])
       dist[w]=dist[u]+cost[u][w];
    }

    }
    }
    int main()
    {
       int n,v,cost[10][10],dist[10],i,j;
       cout<<"Enter the number of nodes";
       cin>>n;
       cout<<"\n"<<"Enter the adjacency matrix";
       for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
           {
               cin>>cost[i][j];
           }
       }
       cout<<"\n"<<"Enter the start node";
       cin>>v;
       dijkstra(n,v-1,cost,dist);
       for(i=0;i<n;i++)
       cout<<"\n"<<"Distance to node"<<i+1<<dist[i];
       return 0;
    }




