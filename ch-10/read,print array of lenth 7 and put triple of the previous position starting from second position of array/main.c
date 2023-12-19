#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[7],b;

    printf("enter the 7 array element:  \n");

    for(int i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<7;i++)
    {
            if(i>=2)
            {
                b=3*a[i-2];
                printf("the num is %d\n",b);
            }
            else
            {
                printf("%d\n",a[i]);
            }
    }


    return 0;
}

