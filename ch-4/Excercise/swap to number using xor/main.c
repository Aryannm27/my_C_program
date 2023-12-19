#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("enter value of a&b: \n");
    scanf("%d %d",&a,&b);

    a=a^b;
    b=a^b;
    a=a^b;

    printf("after swapping a=%d b=%d",a,b);
    return 0;
}
