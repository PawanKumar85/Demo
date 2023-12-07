#include <stdio.h>
int main()
{
//	char ch = 'c';
//	printf("%d\n",sizeof(char));
//	printf("%d\n",sizeof(ch));
//	printf("%d",sizeof('c'));

	typedef int pawan;
	typedef unsigned long int uli;
	uli var2 = 12;
	pawan var1 = 11;
	printf("%d",var1);
	printf("\n%d",var2);
	printf("\n%d",sizeof(uli));
	return 0;
}
