#include <stdio.h>
#include <stdlib.h>

#define speed 59.0
#define distance 18.0
int main()
{
    float z,p;
    z=(distance/speed)*60;
    printf("The time taken in minute %f",z);
    return 0;
}
