#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],positive=0,nagative=0;

    printf("enter 10 numbers: \n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
     for(int i=0;i<10;i++)
    {
        if(a[i]>0)
        {
            positive++;
        }
        else
        {
            nagative++;
        }
    }
    printf("total positive no.is %d\n",positive);
    printf("total nagative no.is %d\n",nagative);
    return 0;
}
