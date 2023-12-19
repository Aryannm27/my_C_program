#include <stdio.h>
#include <stdlib.h>
#define pi 3.14
#define volume(r,h)  ((pi*r*r*h)/3)
#define area(r,l)     ((pi*r*r)+(pi*r*l))

int main()
{
    float r,h,l,z,x;
    printf("enter the radius and hight and length:  \n");
    scanf("%f %f %f",&r,&h,&l);
    z=volume(r,h);
    printf("the volume  of the cone is %f\n",z);
    x=area(r,l);
    printf("the area of the cone is %f",x);
    return 0;
}
