#include <stdio.h>
#include <stdbool.h>


int printInt(int a)
{
    printf("the value of int a=%d ",a);
    return a;
}

bool compare(int a,int b)
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

char printChar(char k)
{
    printf("%c",k);
    return k;
}

float printfloat(float n)
{
    printf("%f",n);
    return n;
}

int main()
{
    int a,b,z;
    char k,m;
    float n,j;
    bool d;
    printf("enter a&b: \n");
    scanf("%d %d",&a,&b);
    z=printInt(a);
    d=compare(a,b);

    printf("enter char: \n");
    scanf("\n%c",&k);
    m=printChar(k);

    printf("enter float value: ");
    scanf("%f",&n);
    j=printfloat(n);

    return 0;
}



