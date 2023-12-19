#include <stdio.h>
#include <stdlib.h>

int avg(int distance,int fuel)
{
    int c;
    c=distance/fuel;
    return c;
}

int main()
{
    int distance=350,fuel=5,z;
    z=avg(distance,fuel);
    printf("the avg is %d km/liter",z);
    return 0;
}
