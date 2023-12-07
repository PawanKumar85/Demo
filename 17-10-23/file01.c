#include <stdio.h>
int main()
{
	FILE *fp = NULL;
	fp = fopen("index.txt","w");
	if(fp == NULL)
		printf("file not created");
	else
		{
			printf("\n Done");
			fputs("Shiva Mota Shivratav",fp);
		}
	return 0;
}
