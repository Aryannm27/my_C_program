#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp=fopen("C:\\hp\\ch-16\\Excercise\\program to generate a Table.txt file, write a table of 10 in same file\\hello.txt","a");
    int n;
    printf("enter n:  \n");
    scanf("%d",&n);

    for(int i=1;i<=10;i++)
    {
        fprintf(fp,"%d x %d=%d\n",n,i,n*i);
    }

    fclose(fp);
    return 0;
}
