#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x=7,y=10;

   x=x+y;
   y=x-y;
   x=x-y;

   printf("the swap no is x=%d and y=%d",x,y);
}
