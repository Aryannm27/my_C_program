#include <stdio.h>
#include <stdlib.h>

/*
float add(float a,float b)
{
    float c;
    c=a+b;
    return c;
}
float sub(float a,float b)
{
    float c;
    c=a-b;
    return c;
}

float mul(float a,float b)
{
    float c;
    c=a*b;
    return c;
}

float divison(float a,float b)
{
    float c;
    c=a/b;
    return c;
}


int main()
{
    float a=11,b=22;

    printf("the add is %f\n",add(a,b));
    printf("the sub is %f\n",sub(a,b));
    printf("the mul is %f\n",mul(a,b));
    printf("the divison is %f\n",divison(a,b));

    return 0;
}
*/


int main()
{
    int i;
    float b;
    b=(float)i;
    for(i=1;i<=10;i++)
   {
        printf(" octal-%o    hex-%x\n",i,i);
   }
    for(b=1;b<=10;b++)
   {
        printf("float-%f\n",b);
   }

    return 0;
}
