#include <stdio.h>
#include <stdlib.h>

void max(float i,float j,float k)
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

void min(float i,float j,float k)
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
    float i,j,k;
    printf("enter value of i,j,k: \n");
    scanf("%f %f %f",&i,&j,&k);
    printf("i=%f j=%f k=%f\n",i,j,k);
    max(i,j,k);
    min(i,j,k);
    return 0;
}
