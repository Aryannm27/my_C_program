#include <stdio.h>
#include <stdlib.h>

void memorymalloc()
{
    int *p;
    p=(int* )malloc(5);
    for(int i=0;i<5;i++)
    {
        scanf("%d",(p+i));
    }
     for(int i=0;i<5;i++)
    {
        printf("%d",*(p+i));
    }

}
void memorycalloc()
{
    int *p;
    p=(int* )calloc(3,sizeof(int));
    for(int i=0;i<3;i++)
    {
        scanf("%d",(p+i));
    }
     for(int i=0;i<3;i++)
    {
        printf("%d",*(p+i));
    }

}

int main()
{
    memorymalloc();
    memorycalloc();
    return 0;
}
