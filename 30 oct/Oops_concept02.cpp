#include <iostream>
using namespace std;

class myObj{
    int a,b,c;

    public :
    void input();
    void process();
    void output();
};

void myObj ::input()
{
    cin >> a >> b;
}

void myObj ::process()
{
    c = a + b;
}

void myObj ::output()
{
    cout << c;
}


int main()
{
    myObj obj;

    obj.input();
    obj.process();
    obj.output();
    return 0;
}