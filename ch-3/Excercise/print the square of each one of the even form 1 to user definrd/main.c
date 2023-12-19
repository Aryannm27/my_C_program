#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter range of n : ");
    scanf("%d",&n);

   for(int i=1;i<n;i++)
   {
       if(i%2==0)
       {
           printf("the square of %d is %d\n",i,i*i);
       }
   }
   return 0;
}
