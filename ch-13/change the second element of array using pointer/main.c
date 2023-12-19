#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[]={10,20,30,40,50,60},*p,y=5,b;

    p=&y;
    b=sizeof(x)/4;
    x[1]=*p;

    for(int i=0;i<b;i++)
    {
        printf("%d\n",x[i]);
    }

    printf("after change second element is %d",x[1]);

    return 0;
}
