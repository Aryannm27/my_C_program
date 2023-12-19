#include <stdio.h>
#include <math.h>

int main()
{
    int n,sum=0;
    printf("enter the range :  \n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        sum=sum+pow(i,i);
    }

    printf("the sum is %d",sum);
    return 0;
}
