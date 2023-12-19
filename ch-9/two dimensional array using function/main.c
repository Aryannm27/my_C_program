#include <stdio.h>
#include <stdlib.h>

int row, column;

void arrayInt(int a[row][column])
{
    printf("enter element: \n");
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<row;i++)
    {
      for(int j=0;j<column;j++)
        {
            printf("a[%d][%d]=%d\n",i,j,a[i][j]);
        }
    }
}

int main()
{
    printf("enter row : \n");
    scanf("%d",&row);
    printf("enter column: \n");
    scanf("%d",&column);
    int a[row][column];
    printf("the no. of array element is %d\n",row*column);
    arrayInt(a);
    return 0;
}
