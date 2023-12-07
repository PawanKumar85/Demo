#include <stdio.h>
#include <stdlib.h>
typedef struct student{
	int id;
	char name[100];
}s;
	
int main()
{
	s s1= {101,"Pawan"};
	
	printf("Id = %d",s1.id);
	printf("\nName = %s",s1.name);
}
