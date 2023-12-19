#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[5];
    int z;
    scanf("%s",&name);
    printf("the string is %s\n",name);
    z=strlen(name);
    printf("the no. of char is %d",z);
    return 0;
}
