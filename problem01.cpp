#include <iostream>
#include <math.h>
#define pi 3.14
using namespace std;

class A
{
	public :
	A(int a)
	{
		float area = pi * pow(a,2);
		cout << "Area of circle : " << area << endl;
	}
	
	A(int a,int b)
	{
		float area = a * b;
		cout << "Area of Rectangle :" << area << endl;
	}
	
	A(int a,int b,int c)
	{
		int s = (a + b + c)/2;
		float area = sqrt(s*(s-a) * s*(s-b) * s*(s-c));
		cout << "Area of Triangle :" << area << endl;
	}
};

int main()
{
	A obj(5);
	A obj2(5,6);
	A obj3(5,6,7);
	
	return 0;
}
