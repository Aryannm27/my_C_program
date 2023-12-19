#include <stdio.h>
#include <stdlib.h>

int distance(int p1,int p2)
{
    int c;
    c=p2-p1;
    return c;
}

int main()
{
   int p1,p2,z;
   printf("enter two points: \n");
   scanf("%d %d",&p1,&p2);
   z=distance(p1,p2);
   printf("the distance is %d",z);
   return 0;
}
