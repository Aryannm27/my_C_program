#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e;
    printf("enter five value: \n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    printf("a=%d b=%d,c=%d d=%d e=%d\n",a,b,c,d,e);

    if(a>b && a>c && a>d && a>e)
    {
        printf("a is bigger");
    }
      if(b>a && b>c && b>d && b>e)
    {
        printf("b is bigger");
    }
      if(c>a && c>b && c>d && c>e)
    {
        printf("c is bigger");
    }
      if(d>a && d>b && d>c && d>e)
    {
        printf("d is bigger");
    }
      if(e>a && e>b && e>c && e>d)
    {
        printf("e is bigger");
    }

   return 0;
}
