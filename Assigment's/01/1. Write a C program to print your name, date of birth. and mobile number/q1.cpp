#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;

void maxInEvent(vector<int> in, vector<int> out)
{
    int i = 0;
    int j = 0;
    int sub = 0;
    int maxi = 0;

    vector<int> temp;

    while (i < in.size() && j < out.size())
    {
        sub = in[i] - out[j];
        if (maxi < sub)
            maxi = sub;
        i++;
        in[i] = sub + in[i];
        j++;
    }

    cout << maxi << endl;
}

int main()
{
    int time;
    cout << " Enter time Interval : ";
    cin >> time;

    int n;

    vector<int> in(time);
    vector<int> out(time);

    cout << "Inter Data " << endl;
    for (auto i = 0; i < time; i++)
    {
        cout << "Enter Data :";
        cin >> n;

        in.push_back(n);
    }

    cout << endl << "Out Data " << endl;
    for (auto i = 0; i < time; i++)
    {
        cout << "Enter Data :";
        cin >> n;

        out.push_back(n);
    }
    maxInEvent(in, out);

    return 0;
}