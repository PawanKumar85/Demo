#include <iostream>
using namespace std;

class A{
	public:
		void class_a()
		{
			cout << "this is class A";
		}
};

class B
	{
		public:
			void class_b()
			{
				cout << "\nthis is class B";
			}	
	};
	
class C :public A,public B
	{			
	};

int main()
{
	C obj;
	obj.class_a();
	obj.class_b();
}
