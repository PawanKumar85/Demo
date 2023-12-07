#include <stdio.h>
int main()
{
	int n = 5;
	int i,j,k;
	for(i = n;i > 0;i--)
	{
		for(j = n;j > 0;j--)
			printf("_");
		for(k = j;k<n;k++)
			printf("*");
		printf("\n");
		
	}
}
