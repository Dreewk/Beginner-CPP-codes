#include<iostream>
#include<stack>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
     string s;
     stack<char> st;
     int i=0;
     cout<<"Enter the string";
     cin>>s;
     while(i<s.size())
     {
          if(s.at(i)=='{')
          st.push(s.at(i));
          else
          if(st.top()=='{' && s.at(i)=='}')
          st.pop();
          i++;
     }
     if(st.size()==0)
     cout<<"Correct expression";
     else
     cout<<"Wrong expression";
     return 0;
}
