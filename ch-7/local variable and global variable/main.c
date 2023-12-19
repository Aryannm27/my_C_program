#include <stdio.h>
#include <stdlib.h>

int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}

int sub(int a,int b)
{
    int c;
    c=a-b;
    return c;
}

int main()
{
    int a=10,b=20,z;
    z=add(a,b);
    z=sub(a,b);
    return 0;
}
