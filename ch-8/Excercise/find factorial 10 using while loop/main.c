#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,f=1;

    printf("enter the no.: \n");
    scanf("%d",&n);

    while(n)
    {
        f*=n;
        n--;
    }

    printf("the factorial no. is %d",f);
    return 0;
}
