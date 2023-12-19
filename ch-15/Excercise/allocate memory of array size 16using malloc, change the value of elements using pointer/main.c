#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *p,n,m;
   p=(int *)malloc(5);

   for(int i=0;i<5;i++)
   {
       scanf("%d",(p+i));
   }
    for(int i=0;i<5;i++)
   {
       printf("p[%d]=%d\n",i,*(p+i));
   }

    printf("enter element want to change: \n");
    scanf("%d",&n);
    printf("enter value to change: \n");
    scanf("%d",&m);

    *(p+n)=m;

    for(int i=0;i<5;i++)
    {
        printf("p[%d]=%d\n",i,*(p+i));
    }
    return 0;
}
