#include<iostream>
#include<algorithm>
#include<string>
#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;
void swap(char *x,char *y)
{
   char temp;
   temp=*x;
   *x=*y;
   *y=temp;
}
void findnext(char number[],int n)
{
     int i,x,j,smallest;
     for(i=n-1;i>=0;i--)
     {
         if(number[i]>number[i-1])
         break;
   }
   if(i==0)
   cout<<"it is not possible";
   else
   {

   x=number[i-1];
   smallest=i;
   for(j=i;j<n;j++)
   {
       if(number[j]>x && number[j]<number[smallest])
       smallest=j;

   }
   swap(&number[i-1],&number[smallest]);
   sort(number+i,number+n);
   cout<<"the next greatest number with the same number of digits is"<<number;
}
}

   int main()
   {
    char str[50];
    int count=0;
       cout<<"Enter the string";
       cin>>str;
       for(int i=0;str[i]!='\0';i++)
        count++;
       findnext(str,count);
       return 0;
    }
