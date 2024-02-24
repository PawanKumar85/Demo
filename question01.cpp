// find the unique element in an array 

#include <iostream>
#include <vector>
using namespace std;

int find_unique(vector<int>a)
{
    int ans  = 0;

    for(int i = 0;i < a.size();i++)
    {
        ans = ans * a[i];
    }

    return ans;
}

int main()
{
    vector<int>a{1,1,2,2,3,4,4,5,5};

    int ans = find_unique(a);
    cout << ans;
    return 0;
}