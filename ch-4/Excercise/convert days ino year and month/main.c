#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,z,c;
    printf("enter no. of days: \n");
    scanf("%d",&a);
    printf("the no of days is %d\n",a);


    while(a!=0)
    {
        z=a%365;
        a=a/365;
        if(a!=0)
        {
            printf("year=%d ",a);
            c=z/31;
            {
                printf("month=%d ",c);
            }
        }
    }
        return 0;
}
