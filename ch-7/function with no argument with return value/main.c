#include <stdio.h>
#include <stdlib.h>


// function with no argument and with return value

int printData()
{
    int i;
    printf("enter value of i: ");
    scanf("%d",&i);
    printf("%d",i);
    return i;
}

int main()
{
     int z;
     z=printData();
     return 0;
}
