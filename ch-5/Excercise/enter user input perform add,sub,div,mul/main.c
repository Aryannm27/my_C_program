#include <stdio.h>
#include <stdlib.h>

float add(float a,float b)
{
    float c;
    c=a+b;
    return c;
}

float sub(float a,float b)
{
    float c;
    c=a-b;
    return c;
}

float mul(float a,float b)
{
    float c;
    c=a*b;
    return c;
}

float divison(float a,float b)
{
    float c;
    c=a/b;
    return c;
}

int main()
{
    float a,b;
    printf("enter value of x&y : ");
    scanf("%f %f",&a,&b);
    printf("the add is %f\n",add(a,b));
    printf("the sub is %f\n",sub(a,b));
    printf("the mul is %f\n",mul(a,b));
    printf("the add is %f\n",divison(a,b));

    return 0;

}
