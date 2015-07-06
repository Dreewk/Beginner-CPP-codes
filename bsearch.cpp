#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector <int> arr;
int target,n;
int find();
int main()
{
   int i,b,a;
   cout<<"Enter size of the array";
   cin>>n;

for(i=0;i<n;i++)
{
cin>>a;
arr.push_back(a);
}
sort(arr.begin(),arr.end());
 cout<<"Enter the target element";
   cin>>target;

b=find();
if(b==-1)
    cout<<"Not present";
     else
     {
         cout<<"The position of the element is"<<b+1;
     }

}

int find ()
// pre: list is sorted in ascending order
//post: ITERATIVE binary search will return the index of the target element, else -1

{
	int mid;
	int first = 0;
	int last = n-1;
	while ( first <= last )
	{
		mid = (first + last) / 2;
		if ( arr[mid] == target )
			return mid;
		if ( arr[mid] > target )
			last = mid - 1;
		else	first = mid + 1;
	}
	return -1;
}
