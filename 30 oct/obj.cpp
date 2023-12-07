#include <iostream>
using namespace std;

class hello
{
    private:
    void print()
    {
        cout << "it's me Hello world!"<<endl;
    }

    public:
    void getHello()
    {
        print();
        
    }
};

int main()
{
    hello s;
    s.getHello();
    return 0;
}