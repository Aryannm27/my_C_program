int row, column,block;

void arrayInt(int a[block][row][column])
{

    printf("enter element: \n");

     for(int k=0;k<block;k++)
    {
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
           scanf("%d",&a[k][i][j]);
            }
        }
    }

    for(int k=0;k<block;k++)
    {
      for(int i=0;i<row;i++)
      {
          for(int j=0;j<column;j++)
        {
            printf("%d      ",a[k][i][j]);
        }
        printf("\n");
      }
      printf("\n");
    }
}

int main()
{
    printf("enter block: \n");
    scanf("%d",&block);
    printf("enter row: \n");
    scanf("%d",&row);
    printf("enter cloumn: \n");
    scanf("%d",&column);
    int a[block][row][column];
    arrayInt(a);
    return 0;
}
