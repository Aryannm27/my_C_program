#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[2][2];

    printf("enter array element: \n");

     for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

      for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }

    return 0;

}
