#include <stdio.h>
#include <stdlib.h>

void add(int *p)
{
    *p = 10;
}

int main()
{
    int a,b=-5;
    add(&a);
    printf("%d",a);
    return 0;
}


