#include <iostream>
using namespace std;

class myObj{
    int a,b,c;

    public:
    void input()
    {

        cout << "Enter :";
        cin >> a >> b;
    }

    void calculation()
    {
        c = a + b;
    }

    void output()
    {
        cout << c;
    }
};

int main()
{
    myObj obj;
    obj.input();
    obj.calculation();
    obj.output();
}