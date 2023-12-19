#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[6],temp;

    printf("enter five element of array: \n");
    for(int i=1;i<6;i++)
    {
        scanf("%d",&a[i]);
    }

    temp=a[5];
    a[5]=a[1];
    a[1]=temp;

    printf("after change 1 to last position : \n");
     for(int i=1;i<6;i++)
    {
        printf("%d\n",a[i]);
    }

    return 0;
}
