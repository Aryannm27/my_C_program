#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],count=0;

    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<10;i++)
    {
        if(a[i]==1)
        {
            count++;
        }
    }

    printf("\ntotal no. of 1 in given no. is :%d ",count);
    return 0;
}
