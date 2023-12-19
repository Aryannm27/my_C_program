#include <stdio.h>
#include <stdlib.h>
#include "sum.h"
#include"mull.h"
#include"divv.h"

void math(float a,float b,float *c,float *d,float *e)
{
    *c=sum(a,b);
    *d=mull(a,b);
    *e=divv(a,b);

}
int main()
{
    float a,b,c,d,e;
    printf("enter a & b : \n");
    scanf("%f %f",&a,&b);
    math(a,b,&c,&d,&e);
    printf("the sum is %f\n",c);
    printf("the mul is %f\n",d);
    printf("the mul is %f\n",e);
    return 0;
}
