#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,a,b,z;
    printf("enter five digit no: ");
    scanf("%d",&num);

    z=num;

    while(num!=0)
    {
        a=num%10;
        b=b*10+a;
        num=num/10;
    }

    if(b==z)
    {
        printf("the no is pelindrome ");
    }
    else
    {
        printf("the no is not pelindrome ");
    }
    return 0;

}
