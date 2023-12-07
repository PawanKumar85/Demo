#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

void display(vector<int>a)
{
	for(int i = 0;i<a.size();i++)
		cout << a[i] << " ";
}

vector<int> duplicate(int a[],int n)
{
	sort(a,a+n);
//	display(a,n);
	vector<int>b;

	for(int i = 0;i<n;i++)
		if(a[i] == a[i+1])
			b.push_back(a[i]);
	
	set<int>st;
	
	for(int i = 0;i<b.size();i++)
		st.insert(b[i]);
	
	for(int i = 0;i<st.size();i++)
		b.push_back(st[i]);
	
	return b;
	
}

int main()
{
	int a[] = {2,3,1,2,3};
	int n = sizeof(a)/sizeof(int);
	vector<int>b = duplicate(a,n);
	
	display(b);
	return 0;
}
