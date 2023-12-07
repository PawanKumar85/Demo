#include <iostream>
using namespace std;

class A
{
    public:
    int a,b;
    static int c,d;
};

int A::c = 30;
int A::d = 40;

int main()
{
    A obj1;
    obj1.a = 10;
    obj1.b = 20;
    A::c = 30;
    A::d = 40;

    cout <<"a = "<<obj1.a<<endl;
    cout <<"b = "<<obj1.b<<endl;
    cout <<""
    return 0;
}