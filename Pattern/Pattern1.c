#include <stdio.h>

int isEven(int i)
{
	if(i%2 == 0)
		return 1;
	else
		return 0;
}

void patter1(int n)
{
	int i,j;
	for(i = 0;i<n;i++)
	{
		for(j = 0;j<i+1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");
}

void patter2(int n)
{
	int i,j;
	for(i = n;i>0;i--)
	{
		for(j = n;j>n-i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}

void patter5(int n)
{
	int i,j;
	for(i = 0;i<n;i++)
	{
		for(j = 0;j<i+1;j++)
		{
			printf("%d ",j+1);
		}
		printf("\n");
	}
}

void patter6(int n)
{
	int i,j;
	int count = 0;
	for(i = 0;i<n;i++)
	{
		for(j = 0;j<i+1;j++)
		{
			count++;
			printf("%d ",count);
		}
		printf("\n");
	}
}

void patter7(int n)
{
	int i,j;
	for(i = 0;i<n;i++)
	{
		for(j = 0;j<i+1;j++)
		{
			printf("%d ",i+1);
		}
		printf("\n");
	}
}

void patter8(int n)
{
	int i,j;
	for(i = 0;i<n;i++)
	{
		for(j = i;j>=0;j--)
		{
			printf("%d ",j+1);
		}
		printf("\n");
	}
}

void patter9(int n)
{
	int i,j;
	for(i = 0;i<n;i++)
	{
		for(j = 0;j<i+1;j++)
		{
			if(isEven(j))
				printf("1 ");
			else
				printf("0 ");
		}
		printf("\n");
	}
}

void patter10(int n)
{
	int i,j;
	for(i = 0;i<n;i++)
	{
		for(j = 0;j<i+1;j++)
		{
			if(isEven(j))
				printf("0 ");
			else
				printf("1 ");
		}
		printf("\n");
	}
}

void patter11(int n)
{
	int i,j,k;
	for(i = 0;i<n;i++)
	{
		for(j = 0;j<n-i;j++)
			printf("%d ",j+1);
		for(k = j-1;k>0;k--)
			printf("%d ",k);
		printf("\n");
	}
}

void patter12(int n)
{
	int i,j;
	for(i = 0;i<n;i++)
	{
		for(j = 0;j<2*n-1;j++)
		{
			if(j < i+1)
				printf("%d",j+1);
			if 
		}
		printf("\n");
	}
}

int main()
{
	int n = 5;
//	printf("Enter N :");
//	scanf("%d",&n);
	
//	patter1(n);
//	patter2(n);
//	patter3(n);
//	patter5(n); 
//	patter6(n);
//	patter7(n);
//	patter8(n);
//	patter9(n);
//	patter10(n);
//	patter11(n);
	patter12(n);
	
	return 0;
}
