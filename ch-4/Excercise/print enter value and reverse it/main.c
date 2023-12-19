#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=122,c=0,y=0;

    while(x!=0)
    {
        y=x%10;
        c=c*10+y;
        x=x/10;
    }
    printf("the reverse no is %d",c);
    return 0;
}
