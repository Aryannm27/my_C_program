#include <stdio.h>
#include <stdlib.h>

void arrayInt(int a[],int n)
{
     for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
      for(int i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
}

int main()
{
    int n;
    printf("enter no. of array element: \n");
    scanf("%d",&n);
    int a[n];
    arrayInt(a,n);
    return 0;
}
