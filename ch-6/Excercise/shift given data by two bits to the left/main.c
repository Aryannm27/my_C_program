#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,z;
    printf("enter value ");
    scanf("%d",&i);
    printf("the value of i %d\n",i);

    z=(i<<2);
    printf("the left shift two byte value is %d\n",z);
    return 0;
}
