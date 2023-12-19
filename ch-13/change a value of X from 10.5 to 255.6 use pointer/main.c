#include <stdio.h>
#include <stdlib.h>

int main()
{
   float x=10.5,y=255.6,*p;

   p=&y;
   x=*p;

   printf("the value of x is %.2f",x);
    return 0;
}
