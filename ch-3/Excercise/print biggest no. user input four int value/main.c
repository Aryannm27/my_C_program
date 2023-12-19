#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,w,z;
    printf("enter four int value: \n");
    scanf("%d %d %d %d",&x,&y,&w,&z);

    if(x>=y && x>=w && x>=z)
    {
        printf("the biggest no. is %d",x);
    }
    else if(y>=x && y>=w && y>=z)
    {
        printf("the biggest no. is %d",y);
    }
    else if(w>=x && w>=y && w>=z)
    {
        printf("the biggest no. is %d",w);
    }
    else
    {
        printf("the biggest no. is %d",z);
    }

    return 0;
}
