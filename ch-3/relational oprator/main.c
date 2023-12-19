#include <stdio.h>
#include <stdbool.h>

bool equal(int a,int b);
bool notequal(int a,int b);
bool grater(int a,int b);
bool less(int a,int b);
bool graterequal(int a,int b);
bool lessequal(int a,int b);

int main()
{
    int a,b;
    bool z;
    printf("enter a and b: \n");
    scanf("%d %d",&a,&b);
    z=equal(a,b);
    z=notequal(a,b);
    z=grater(a,b);
    z=less(a,b);
    z=graterequal(a,b);
    z=lessequal(a,b);
    return 0;
}



bool equal(int a,int b)
{
    bool z;
    if(a==b)
    {
        z=true;
    }
    else
    {
        z=false;
    }
    return z;
}

bool notequal(int a,int b)
{
    bool z;
    if(a!=b)
    {
        z=true;
    }
    else
    {
        z=false;
    }
    return z;
}

bool grater(int a,int b)
{
    bool z;
    if(a>b)
    {
        z=true;
    }
    else
    {
        z=false;
    }
    return z;
}

    bool less(int a,int b)
{
    bool z;
    if(a<b)
    {
        z=true;
    }
    else
    {
        z=false;
    }
    return z;
}

bool graterequal(int a,int b)
{
    bool z;
    if(a>=b)
    {
        z=true;
    }
    else
    {
        z=false;
    }
    return z;
}

bool lessequal(int a,int b)
{
    bool z;
    if(a<=b)
    {
        z=true;
    }
    else
    {
        z=false;
    }
    return z;
}

