#include <stdio.h>
#include <stdlib.h>

int add(int a[],int n)
{
   int sum=0;

   for(int i=0;i<n;i++)
   {
       if(a[i]%2!=0)
       {
           sum+=a[i];
       }

   }
   return sum;
}

int main()
{
    int z,n;
    printf("enter size of array: ");
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    z=add(a,n);
    printf("the odd value sum is %d",z);

return 0;

}
