#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> addition(vector<int>a,vector<int>b,int k)
{
    vector<int>c;
    for(int i = 0;i<b.size();i++)
    {
        for(int j = 0;j<a.size();j++)
        {
            int x = a[j] + b[i];
            c.push_back(x);
        }
    }
    vector<int>temp;
    sort(c.begin(),c.end(),greater<int>());
    for(int i = 0;i<k;i++)
        temp.push_back(c[i]);
    return temp;
}

int main() {
    vector<int> a{1, 4, 2, 3};
    vector<int> b{2,5,1,6};
    int k = 3;
    vector<int>d = addition(a,b,k);
    
    for(auto value: d)
        cout << value << " ";
    
    return 0;
}