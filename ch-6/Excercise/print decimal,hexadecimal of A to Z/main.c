#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(char i='A';i<='z';i++)
    {
        printf("%c decimal-%d  hex-%x\n",i,i,i);
    }
    return 0;
}
