#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[7];

    for(int i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
        printf("%d\n",-a[i]);
    }

    return 0;
}
