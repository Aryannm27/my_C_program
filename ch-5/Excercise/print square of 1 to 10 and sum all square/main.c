#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,sum=0;

   for(i=1;i<=10;i++)
   {
       printf(" the square of %d is %d\n",i,i*i);
   }

   for(i=1;i<=10;i++)
   {
       sum+=i*i;
   }
   printf("the sum of all square is %d",sum);
   return 0;

}
