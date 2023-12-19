#include <stdio.h>
#include <stdbool.h>

bool logicaland(int a,int b);
bool logicalor(int a,int b);
bool logicalnot(int a,int b);

int main()
{
    int a,b;
    bool z;
    printf("enter a and b: \n");
    scanf("%d %d",&a,&b);
    z=logicaland(a,b);
    z=logicalor(a,b);
    z=logicalnot(a,b);
    return 0;
}

bool logicaland(int a,int b)
{
    bool z;
    if(a&&b)
    {
        z=true;
    }
    else
    {
        z=false;
    }
    return z;
}

bool logicalor(int a,int b)
{
    bool z;
    if(a||b)
    {
        z=true;
    }
    else
    {
        z=false;
    }
    return z;
}

bool logicalnot(int a,int b)
{
    bool z;
    if(!(a&&b))
    {
        z=true;
    }
    else
    {
        z=false;
    }
    return z;
}
