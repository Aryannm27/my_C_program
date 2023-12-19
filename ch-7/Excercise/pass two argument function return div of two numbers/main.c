#include <stdio.h>
#include <stdlib.h>

float divison(float a,float b)
{
    float c;
    c=a/b;
    return c;
}

int main()
{
    float a,b,z;
    printf("enter two value: ");
    scanf("%f %f",&a,&b);
    z=divison(a,b);
    printf("the divison is %f",z);
    return 0;
}

