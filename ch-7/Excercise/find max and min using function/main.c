#include <stdio.h>
#include <stdlib.h>


void max(int i,int j,int k)
{
    if(i>j)
    {
        if(i>k)
        {
            printf("i is maximum\n");
        }
        else
        {
            printf("k is maximum\n");
        }

    }
    else
    {
        if(j>k)
        {
            printf("j is maximum\n");
        }
        else
        {
            printf(" k is maximum\n");
        }
    }
}

void min(int i,int j,int k)
{
    if(i<j)
    {
        if(i<k)
        {
            printf("i is minimum\n");
        }
        else
        {
            printf("k is minimum\n");
        }

    }
    else
    {
        if(j<k)
        {
            printf("j is minimum\n");
        }
        else
        {
            printf("k is minimum\n");
        }
    }
}

int main()
{
    int i,j,k;
    printf("enter value of i,j,k: \n");
    scanf("%d %d %d",&i,&j,&k);
    printf("i=%d j=%d k=%d\n",i,j,k);
    max(i,j,k);
    min(i,j,k);
    return 0;
}
