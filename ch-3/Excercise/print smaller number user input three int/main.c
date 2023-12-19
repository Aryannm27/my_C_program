#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    printf("enter three value: \n");
    scanf("%d %d %d",&x,&y,&z);

    if(x<y)
    {
        if(x<z)
        {
            printf("the smaller no is %d",x);
        }
        else
        {
            printf("the smaller no is %d",z);
        }
    }
    else
    {
        if(y<z)
        {
             printf("the smaller no is %d",y);
        }
        else
        {
             printf("the smaller no is %d",z);
        }
    }
    return 0;
}
