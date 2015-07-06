#include<iostream>
#include<queue>
using namespace std;
int adj[100][100];
bool visited[100];
void bfs(int v,int n)
{
 int i;
 queue<int> Q;
 cout<<"\n"<<v;
 visited[v]=true;
 Q.push(v);
 while(Q.size())
 {
   v=Q.front();
   Q.pop();
   for(i=1;i<=n;i++)
   {
     if(adj[v][i]==1 && visited[i]==false)
     {
       cout<<"\n"<<i;
       visited[i]=true;
       Q.push(i);
       }
    }
}
}






int main()
{
  int x,i,j,start;
  cout<<"\n"<<"Enter the no.of nodes";
  cin>>x;
  for(i=1;i<=x;i++)
    visited[i]=false;

    cout<<"Enter the adjacency matrix";
    for(i=1;i<=x;i++)
    {
      for(j=1;j<=x;j++)
      {
        cin>>adj[i][j];
        }
    }
    cout<<"\n"<<"Enter the start node";
    cin>>start;
    bfs(start,x);

    return 0;
    }


