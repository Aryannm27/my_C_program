#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<time.h>

void write(FILE *fp)
{
    int n;
    printf("enter the n:  \n");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
   {
        fprintf(fp,"%d x %d = %d \n",n,i,n*i);
   }
    fclose(fp);
}

int read(FILE *fp,int *c)
{
    char z,a[1024];
    int i=0,*p;
    p=&a;
    while(!feof(fp))
    {
        z=getc(fp);
        while(z)
        {
            a[i]=z;
            printf("%c",a[i]);
            i++;
            break;
        }
    }
    *c=i-1;
    printf("the size of data is %d\n",*c);
    fclose(fp);
    return p;
}

void writech(FILE *fp,char x[],int c)
{
    fp=fopen("hello.txt","w");
    for(int i=0;i<c;i++)
    {
        fprintf(fp,"%c",x[i]);
    }
    fclose(fp);
}

int main()
{
    FILE *fp;
    char *f,x[1024];
    int c;
    fp=fopen("table.txt","w");
    write(fp);
    fp=fopen("table.txt","r");
    f=read(fp,&c);
    for(int i=0;i<=c;i++)
    {
        printf("%c",*(f+i));
        x[i]=*(f+i);
    }
    writech(fp,x,c);
    return 0;
}


/*
int main()
{
    FILE *fp;
    char z;
    fp=fopen("hello.txt","r");
    fseek(fp,11,SEEK_SET);
    printf("%l d\n",ftell(fp));
    while(!feof(fp))
    {
        z=getc(fp);
        printf("%c",z);
    }
    return 0;
}

*/


/*
int main()
{
    FILE *fp;
    char z;
    fp=fopen("hello.txt","r");
    fseek(fp,11,SEEK_SET);
    printf("%l d\n",ftell(fp));
    while(!feof(fp))
    {
        z=getc(fp);
        printf("%c",z);
    }
    return 0;
}

*/
