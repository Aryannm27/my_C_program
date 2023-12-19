#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],sum=0;

    printf("enter 10 numbers: \n");

    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<10;i++)
    {
        if(a[i]%2!=0)
        {
            sum+=a[i];
        }
    }

    printf("odd no. sum=%d",sum);

        return 0;
}
