#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter no. of row : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int k=i;k<=n;k++)
        {
         printf(" ");
        }
            for(int j=i;j<=2*i-1;j++)
            {
                printf("%d ",i);
            }
        printf("\n");
    }

    return 0;
}
