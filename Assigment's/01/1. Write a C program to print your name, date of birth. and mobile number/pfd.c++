#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

void display(vector<int> a)
{
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;
}

vector<int> duplicate(vector<int>a)
{
    sort(a.begin(),a.end());
    for(int i = 0;i < a.size();i++)
    {
        int first = lower_bound(a.begin(),a.end(),a[i]);

    }
}

int main()
{
    vector<int>a{3, 4, 12, 3, 12, 3, 4, 4, 12, 7, 11, 6, 5};
    vector<int> b = duplicate(a);

    display(b);
    return 0;
}