#include <stdio.h>
int main(int argv,char *argc[])
{
    printf("Command line argument !!");
    printf("No of Argument : %d",argv);
    for(int i = 0;i<argv;i++)
    {
            printf("\n %s",argc[i]);
    }

    return 0;
}
