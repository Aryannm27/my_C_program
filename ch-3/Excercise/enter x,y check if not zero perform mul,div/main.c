#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;
    printf("enter two value: ");
    scanf("%f %f",&x,&y);

    if(x!=0 || y!=0)
    {
        printf("the mul is %f\n",x*y) ;
    }

    if(x==0)
    {
        printf("you enter x zero\n");
    }
    else if(y==0)
    {
        printf("you enter y zero\n");
    }
    else
    {
        printf("the div is %f\n",x/y);
    }

    return 0;
}
