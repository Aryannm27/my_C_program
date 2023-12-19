#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[]={1,2,3,4,5};

    a[0]=10;
    a[1]=20;
    a[2]=30;
    a[3]=40;
    a[4]=50;

    for(int i=0;i<5;i++)
    {
        printf("after changing value of element %d - %d\n",i,a[i]);
    }
    return 0;
}
