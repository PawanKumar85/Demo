#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argv,char *argc[])
{
    int c = atoi(argc[1]) + atoi(argc[2]);
    printf("%d",c);
    return 0;
}