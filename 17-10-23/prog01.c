#include <stdio.h>
#pragma pack(0)		// time efficient
//#pragma pack(1)		// space efficient
struct A{
	char ch;
	int a;
	long long int b;	
};

struct B{
	int a;
	long long int c;
	char ch;
};

int main()
{
	printf("%d",sizeof(struct A));
	printf("\n%d",sizeof(struct B));
	return 0;
}


//note : define memory smaller to bigger	// Good Practice
