#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,z,sum=0,q,p;
    printf("enter value of a: ");
    scanf("%d",&a);
    p=a;
    while(a!=0)
    {
        z=a%10;
        a=a/10;

        q=1;
        while(z!=0)
        {
            q=q*z;
            z--;
        }
        sum=sum+q;
    }

    if(p==sum)
    {
        printf("the number is special number");
    }
    else
    {
        printf("the number is not special");
    }

    return 0;
}
