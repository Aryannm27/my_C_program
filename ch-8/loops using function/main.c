#include <stdio.h>
#include <stdlib.h>

void test_if(int a,int b)
{
    if(a>b)
    {
        printf("a is bigger\n");
    }
}

void test_if_else(int a,int b)
{
    if(a>b)
    {
        printf("a is bigger\n");
    }
    else
    {
        printf("b is bigger\n");
    }
}

void test_while(int a)
{
   while(a<=10)
   {
       printf("%d\n",a);
       a++;
   }
}

void test_for_loop(int a)
{
    for(a=0;a<=10;a++)
    {
        printf("%d\n",a);
    }
}

void test_do_while(int a)
{
    do
    {
        printf("%d\n",a);
        a++;
    }
    while(a<=10);
}


int main()
{
    int a,b;
    printf("enter a&b : \n");
    scanf("%d %d",&a,&b);
    test_if(a,b);
    test_if_else(a,b);
    test_while(a);
    test_for_loop(a);
    test_do_while(a);
    return 0;
}

