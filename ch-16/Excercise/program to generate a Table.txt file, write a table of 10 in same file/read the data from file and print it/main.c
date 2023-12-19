#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char z;

    fp=fopen("C:\\hp\\ch-16\\Excercise\\program to generate a Table.txt file, write a table of 10 in same file\\hello.txt","r");

    while(!feof(fp))
    {
        z=getc(fp);
        printf("%c",z);
    }

    fclose(fp);
    return 0;
}
