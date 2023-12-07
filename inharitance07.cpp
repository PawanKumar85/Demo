#include <iostream>
using namespace std;

class A{
	public :
		A(){
			cout << "Class A" << endl;
		}
		~A()
		{
			cout << "Class ~A" << endl;
		}
};

class B : public A{
	public :
		B()
		{
			cout << "Class B" << endl;
		}
		~B()
		{
			cout << "Class ~B" << endl;
		}
};

int main()
{
	A obj;
	B obj2;
	return 0;
}

//The order Execution of Constructer is parent to child.
//But the order of exection of destruction is child to parent.

