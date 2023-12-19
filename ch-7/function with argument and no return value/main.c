#include <stdio.h>
#include <stdlib.h>

//function with arguent and no return value

void printInt(int i)
{
    printf("%d",i);
}

int main()
{
    int i;
    printf("enter value of i: ");
    scanf("%d",&i);
    printInt(i);
    return 0;
}
