#include <stdio.h>
#include <stdlib.h>

float perimeter(float r)
{
    float a=3.14,result;
    result=2*a*r;
    return result;
}

int main()
{
   float r,z;
   printf("enter radius of circle: ");
   scanf("%f",&r);
   z=perimeter(r);
   printf("the perimeter of circle is %f",z);
   return 0;
}
