#include <stdio.h>
#include <stdlib.h>

// function with argument and with return value

int printInt(int i)
{
    printf("%d",i);
    return i;
}

int main()
{
    int i,z;
    printf("enter value of i: ");
    scanf("%d",&i);
    z=printInt(i);
    return 0;
}

