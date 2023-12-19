#include <stdio.h>
#include <stdlib.h>


float avg(int *p,int n)
{
    float sum=0,avg=0;
    for(int i=0;i<n;i++)
    {
       // for(int j=0;j<n;j++)
        {
        sum=sum+a[i];
        }
    }
    avg=sum/n;
    for(int i=0;i<n*n;i++)
    {
        printf("value : %d",*(p+i));
    }

    return avg;
}

int main()
{
    int n;
    float z;
    printf("enter no. of array elememt: \n");
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    int *p ;
    p=a;
    z=avg(p,n);
    printf("the avg is %f",z);
    return 0;
}



/*
int main()
{
    int a[2][2];
    int **p;

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
            printf("%d\n",&a[i][j]);
        }
    }
    p=a;
        for(int i=0;i<4;i++)
{
            printf("\n%d  %d ",((int*)p+i),*((int*)p+i));
        }

}

    return 0;
}
*/
