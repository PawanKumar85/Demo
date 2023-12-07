#include <stdio.h>
int main()
{
	static int i = 2;
	printf("hello main!");
	if(i < 3)
		main(i = 5);
}
