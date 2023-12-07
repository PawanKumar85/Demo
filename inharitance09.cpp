#include <iostream>
using namespace std;

class A{
	int a;
	public :
		A(int temp)
		{
			a = temp;
			cout << "A Class Const \n";
			cout << "A Class - a = " << a << endl; 
		}
};

class B : public A  // Class B Is - A Child of class A
{
	int b;
	public:
	B(int m,int n) : A(n)
	{
		b = m;
		cout << "B Class Const \n";
		cout << "B Class -b =" << b << endl;
	}
};

class C : public B{
	int c;
	public :
		C(int x,int y,int z) : B(x,z)
		{
			c = x;
			cout << "C Class Const \n";
			cout << "C class - C = " << c << endl;
		}
};
int main()
{
	C obj(10,20,30);
	return 0;
}
