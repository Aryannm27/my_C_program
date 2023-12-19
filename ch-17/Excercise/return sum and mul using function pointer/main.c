#include <stdio.h>
#include <stdlib.h>

void math(int *x,int *y)
{
    *x=(*x)+(*y);
    *y=((*x)-(*y))*(*y);
}

int main()
{
    int x,y;
    printf("enter x & y: \n");
    scanf("%d %d",&x,&y);
    math(&x,&y);
    printf("the sum is %d the mul is %d",x,y);
    return 0;
}
