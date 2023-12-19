#include <stdio.h>
#include <stdlib.h>

int bitand(int a,int b)
{
    int c;
    c=a&b;
    return c;
}

int bitor(int a,int b)
{
    int c;
    c=a|b;
    return c;
}

int bitnot(int a)
{
    int c;
    c=(~a);
    return c;
}
int bitxor(int a,int b)
{
    int c;
    c=a^b;
    return c;
}

int main()
{
    int a,b;
    printf("enter value of a&b:  \n");
    scanf("%d %d",&a,&b);

    printf("the bitwise and is %d\n",bitand(a,b));
    printf("the bitwise or is %d\n",bitor(a,b));
    printf("the bitwise not is %d\n",bitnot(a));
    printf("the bitwise xor is %d\n",bitxor(a,b));


    return 0;
}
