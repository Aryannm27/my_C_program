#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0;

    for(int i=1;i<=6;i++)
    {
        sum+=i*i;
    }

    printf("the sum of all suare value is %d",sum);

    return 0;
}
