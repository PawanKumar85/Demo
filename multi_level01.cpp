#include <iostream>
using namespace std;

class A
	{
		public:
		void class_A()
		{
			cout << "This is Class A";
		}
	};

class B : public A
	{
		
	};

class C : public B
	{
		
	};

int main()
{
	C obj;
	obj.class_A();
	return 0;
}
