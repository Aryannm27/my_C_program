#include <stdio.h>
#include <stdlib.h>

int main()
{
   float sum=0,per;
   int n;
   printf("enter no. of subject: ");
   scanf("%d",&n);
   int a[n];

   for(int i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(int i=0;i<n;i++)
   {
       sum+=a[i];
   }
   per=(sum/n);
   printf("the percentage of student is %f",per);

    return 0;
}
