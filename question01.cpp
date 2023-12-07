#include<iostream>
using namespace std;

class A
{
	protected:
		void pro_fun()
		{
			cout<<"A class protected member"<<endl;
		}
};

class B:public A
{
};

class C:public B
{
	public:
		void fun()
		{
			pro_fun();
			cout<<"C member";
		}
};

int main()
{
	C obj;
	obj.fun();
	return 0;
}
