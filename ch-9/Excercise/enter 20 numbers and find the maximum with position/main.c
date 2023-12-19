#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],max;

    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];

    for(int i=0;i<5;i++)
    {
        max=(max>a[i])?max:a[i];
    }

    printf("the minimum number is %d and its position is %d",max,&max);
    return 0;
}
