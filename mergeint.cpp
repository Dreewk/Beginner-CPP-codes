#include<iostream>
#include<algorithm>
#include<stack>
#include<vector>
using namespace std;
struct Interval
{
  int start;
  int end;
};
bool compareinterval(Interval i1,Interval i2)
{
  return (i1.start < i2.start)? true: false;
  }
  void mergeIntervals(vector <Interval> &intervals)
  {
      stack<Interval> s;
      sort(intervals.begin(),intervals.end(),compareinterval);
      s.push(intervals[0]);
      Interval l;
      for(int i=1;i<intervals.size();i++)
      {
          l=s.top();
          if(l.end<intervals[i].start)
          s.push(intervals[i]);
          else
          if(l.end<intervals[i].end)
          {
             s.pop();
             l.end=intervals[i].end;
             s.push(l);
            }
        }
        while(!s.empty())
          {
            Interval t=s.top();
            cout<<t.start<<""<<t.end;
            }
    }
    int main()
    {

       Interval intvls[] = { {6,8}, {1,9}, {2,4}, {4,7} };
    vector<Interval> intervals(intvls, intvls+4);

    // Merge overlapping inervals and print result
    mergeIntervals(intervals);
      mergeIntervals(intervals);
      return 0;
    }
