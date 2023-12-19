#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("enter two digit number: ");
    scanf("%d",&a);
    printf("%d \n",a);

    while(a!=0)
    {
        b=a%2;
        a=a/2;
        printf("%d\n",b);

    }
    return 0;
}

























