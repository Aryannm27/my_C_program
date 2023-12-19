#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    p=(int *)malloc(5);

    printf("enter 16 element: \n");

    for(int i=0;i<5;i++)
    {
        scanf("%d",(p+i));
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\n",*(p+i));
    }
    return 0;
}

