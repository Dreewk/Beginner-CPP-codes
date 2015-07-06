#include<iostream>
using namespace std;
int adj[20][20],n;
bool visited[20];
void dfs(int v)
{
  int i;
  cout<<"\n"<<v;
  visited[v]=true;
  for(i=1;i<=n;i++)
  {
    if(adj[v][i]==1 && visited[i]==false)
    dfs(i);
    }
    }
    int main()
    {
      int i,j;
      cout<<"\n"<<"Enter the number of nodes";
      cin>>n;
      cout<<"\n"<<"Enter the adjacency matrix";
      for(i=1;i<=n;i++)
      {
        for(j=1;j<=n;j++)
        {
          if(i!=j)
          {
            cout<<"\n"<<"Enter the path for "<<i<<j;
            cin>>adj[i][j];
            }
            }
            }
            for(i=1;i<=n;i++)
            visited[i]=false;
            dfs(1);
            return 0;
    }
