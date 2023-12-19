#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct data
{
    char name[10];
};

int main()
{
    struct data *p,*q;
    p=(struct data *)malloc(30);
    printf("enter 3 string: \n");
    for(int i=0;i<3;i++)
    {
        scanf("%s",&(p+i)->name);
    }
    printf("the data stored varible p : \n");
    for(int i=0;i<3;i++)
    {
        printf("%s\n",(p+i)->name);
    }
    printf("the data cpoied variable p to q :  \n");
    q=(struct data *)malloc(30);
    memcpy(q,p,30);

    for(int i=0;i<3;i++)
    {
        printf("%s\n",(q+i)->name);
    }

    return 0;
}

/*
struct data
{
    char name[10];
};

int main()
{
    struct data *p;
    p=(struct data *)malloc(30);

    for(int i=0;i<3;i++)
    {
        scanf("%s",&(p+i)->name);
    }
    for(int i=0;i<3;i++)
    {
        printf("%s\n",(p+i)->name);
    }
    memset(p+2,1,2);

    for(int i=0;i<3;i++)
    {
        printf("%s",(p+i)->name);
    }
    return 0;
}

*/
