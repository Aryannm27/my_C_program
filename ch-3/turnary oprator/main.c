#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("enter a and b: \n");
    scanf("%d %d",&a,&b);
    c=((a>b)?a:b);
    printf("the value of c is: %d",c);
    return 0;
}
