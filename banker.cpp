/*Bankers algorithm*/
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include<queue>
using namespace std;
queue <int> q,a;
int b[100],cv=0;
void bankers(int Max[][10],int need[][10],int alloc[][10],int avail[],int p,int r,int n,int rq[]);
int main()
{
  int Max[10][10],need[10][10],alloc[10][10],avail[10];
  int tMax[10][10],tneed[10][10],talloc[10][10],tavail[10];
  int p, r, i, j,n,rq[10];
  printf("Enter the no of processes : ");
  scanf("%d", &p);
  printf("\n\nEnter the no of resources : ");
  scanf("%d", &r);
  printf("\n\nEnter the Max Matrix for each process : ");
  for(i = 0; i < p; i++)
  {
    printf("\nFor process %d : ", i + 1);
    for(j = 0; j < r; j++)
    {
      scanf("%d", &Max[i][j]);
      tMax[i][j]=Max[i][j];
    }
  }
  printf("\n\nEnter the allocation for each process : ");
  for(i = 0; i < p; i++)
  {
    printf("\nFor process %d : ",i + 1);
    for(j = 0; j < r; j++)
    {
      scanf("%d", &alloc[i][j]);
      talloc[i][j]=alloc[i][j];
    }
  }
  printf("\n\nEnter the Available Resources : ");
  for(i = 0; i < r; i++)
  {
    scanf("%d", &avail[i]);
    tavail[i]=avail[i];
  }
  for(i = 0; i < p; i++)
  {
    for(j = 0; j < r; j++)
    {
      need[i][j] = Max[i][j] - alloc[i][j];
      tneed[i][j]=need[i][j];
    }
  }
  bankers(Max,need,alloc,avail,p,r,-1,0);
 printf("Enter the process no to request\n");
 scanf("%d",&n);
 printf("Enter requested resourses\n");
 for(i=0;i<r;i++)
   scanf("%d",&rq[i]);
 bankers(tMax,tneed,talloc,tavail,p,r,n,rq);
 return 0;
}


void bankers(int M[][10],int need[][10],int alloc[][10],int avail[],int p,int r,int n,int rq[])
{
 int i,j,completed[10], safeSequence[10],process, count=0;
 for(i = 0; i< p; i++)
   completed[i] = 0;
 if(n!=-1)
 {
  for(i = 0; i < r; i++)
  {
    alloc[n][i]+=rq[i];
    avail[i]-=rq[i];
  }
 } 
        do
        {
            printf("\n Max matrix:\t Allocation matrix:\t Need:\n");
            for(i = 0; i < p; i++)
            {
                for( j = 0; j < r; j++)
                    printf("%d ", M[i][j]);
                printf("\t\t");
                for( j = 0; j < r; j++)
                    printf("%d ", alloc[i][j]);
             printf("\t\t");
                for( j = 0; j < r; j++)
                    printf("%d ", need[i][j]);
             printf("\t\t");
//if(i<r)        
  //  printf("%d ",avail[i]);
                printf("\n");
            }

            process = -1;

            for(i = 0; i < p; i++)
            {
//while(!q.empty()){q.pop();}
                if(completed[i] == 0)//if not completed
                {
                    process = i ;
                    for(j = 0; j < r; j++)
                    {
                        if(avail[j] < need[i][j])
                        {
                            process = -1;
                            break;
                        }
                    }
                }
                if(process != -1)
                    break;
            }
while(!q.empty()){q.pop();}

            if(process != -1)
            {//while(!q.empty()){q.pop();}
                printf("\nProcess %d runs to completion!", process + 1);
                q.push(process+1);
while(!q.empty())
{ cout<<" "<< q.front();
b[cv++]=q.front();
q.pop();
cv++;
}
     
printf("\navailable:");
                count++;
                for(j = 0; j < r; j++)
                {
                    avail[j] += alloc[process][j];
                    alloc[process][j] = 0;
                    M[process][j] = 0;
                    completed[process] = 1;
printf("%d ",avail[j]);
//if(j<=cv)
//printf("%d ",b[j]);
                }
            }
printf("< ");
for(j=0;j<=cv;j++)
if(b[j]!=0)
printf("%d ",b[j]);
printf(" >");
        }while(count != p && process != -1);
        if(count == p)
        {
            printf("\nThe system is in a safe state!!\n");
            printf("Safe Sequence : < ");
for(j=0;j<=cv;j++)
if(b[j]!=0)
printf("%d ",b[j]);
printf(" >");
for(j=0;j<=6;j++)
b[j]=0;
cv=0;
//while(!q.empty())               
//{ cout<<" "<< q.front();
//q.pop();
//}           printf(">\n");
        }
        else
            printf("\nThe system is in an unsafe state!!");
}
